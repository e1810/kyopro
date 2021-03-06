#include<bits/stdc++.h>
using ll = int_fast64_t;

template<typename T>
struct Segtree{
        using F = std::function<T(T,T)>;
        std::vector<T> seg;
        int size=1;
        T unit;
        F func;

        Segtree(int n, T u, F f): unit(u), func(f) {
                while(size<n) size <<= 1;
                seg.assign(2*size-1, unit);
        }

        void update(int idx, T x){
                idx += size-1;
                seg[idx] = x;
                while(idx>0){
                        idx = (idx-1) / 2;
                        seg[idx] = func(seg[2*idx+1], seg[2*idx+2]);
                }
        }

        T query(int a, int b, int k=0, int l=0, int r=-1){
                if(r<0) r = size;
                if(b<=l or r<=a) return unit;
                if(a<=l and r<=b) return seg[k];
                return func(query(a,b, 2*k+1, l,(l+r)/2), query(a,b, 2*k+2, (l+r)/2,r));
        }

        T operator[](int i){return seg[size-1+i];}
};

int main(){
	int n, q;
	scanf("%d %d", &n, &q);
	Segtree<ll> seg(n, INT_MAX, [](ll a, ll b){return std::min(a, b);});
	for(int i=0; i<q; i++){
		int com, x, y;
		scanf("%d %d %d", &com, &x, &y);
		if(com==0) seg.update(x, y);
		else printf("%ld\n", seg.query(x, y+1));
	}
}
