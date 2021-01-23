#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;

#define REP(i,b,e) for(int i=b; i<e; i++)
#define PRINT(vec) {printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");}
#define fi first
#define se second

const int MOD = 1e9+7;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(){
	int n;
	scanf("%d", &n);
	ll a[n], ans = 0;
	REP(i, 0, n) scanf("%ld", &a[i]);
	REP(i, 0, n){
		ll min = a[i];
		REP(j, i, n){
			min = std::min(min, a[j]);
			ans = std::max(ans, min * (j - i + 1));
		}
	}
	printf("%ld
", ans);
	return 0;
}
