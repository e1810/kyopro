#pragma target("avx")
#pragma optimize("O3")
#include<bits/stdc++.h>
using ll = int_fast64_t;
using P = std::pair<ll,ll>;
using PP = std::pair<ll,P>;
using V = std::vector<ll>;
template<typename T> using pq = std::priority_queue<T>;
template<typename T> using rpq = std::priority_queue<T, std::vector<T>, std::greater<T>>;

#define REP(i,b,e) for(ll i=b; i<e; i++)
#define ALL(vec) vec.begin(),vec.end()
#define PRINT(vec) printf("[ ");for(auto &i:vec)printf("%ld ",i);puts("]");
#define SCAN(vec) for(auto &i:vec)scanf("%ld",&i)
#define fi first
#define se second

const int MOD = 998244353;
const ll INF = 1e18;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1}, dy[] = {1, 0, -1, 0, 1, -1, -1, 1};

ll modpow(ll a, ll p){
	ll ret = 1;
	while(p){
		if(p&1) ret = ret * a % MOD;
		a = a * a % MOD;
		p >>= 1;
	}
	return ret;
}

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	REP(i, 0, n) scanf("%d", &a[i]);

	int dis[n] = {};
	for(auto x: a) dis[x]++;

	ll ans = (dis[0]==1 and a[0]==0);
	REP(i, 1, n){
		ans = ans * modpow(dis[i-1], dis[i]) % MOD;
	}
	printf("%ld
", ans);
	return 0;
}
