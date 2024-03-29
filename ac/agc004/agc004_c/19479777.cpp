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
	int h, w;
	scanf("%d %d", &h, &w);
	char red[h][w+1], blue[h][w+1];
	REP(i, 0, h){
		REP(j, 0, w){
			red[i][j] = blue[i][j] = '.';
			if(i&1) red[i][j] = '#';
			else blue[i][j] = '#';
		}
		red[i][0] = blue[i][w-1] = '#';
		red[i][w-1] = blue[i][0] = '.';
		red[i][w] = blue[i][w] = ' ';
	}

	REP(i, 0, h){
		char s[w+1];
		scanf("%s", s);
		REP(j, 0, w) if(s[j]=='#') {
			if(i&1) blue[i][j] = '#';
			else red[i][j] = '#';
		}
	}

	REP(i, 0, h) puts(red[i]); puts("");
	REP(i, 0, h) puts(blue[i]); puts("");
	return 0;
}
