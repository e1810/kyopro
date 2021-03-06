
#pragma target("avx")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define rep(i,b,e) for(ll i=b; i<e; i++)
#define be(vec) vec.begin(),vec.end()
#define print(vec) for(auto &i:vec)fprintf(stderr,"%ld ",i);puts("");
#define scan(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 1e9+7;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	ll a=140, b=170, c, d;
	scanf("%ld %ld", &c, &d);
	
	ll ans = 0;
	while(a<=1e15){
		ans += std::max(0l, std::min(b, d)-std::max(a, c));
		a *= 2;
		b *= 2;
	}
	printf("%ld
", ans);
	return 0;
}
