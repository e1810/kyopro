#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int h, w;
	scanf("%d %d", &h, &w);
	char fie[h][w+1], ans[h][w+1];
	REP(i, 0, h) scanf("%s", fie[i]);
	REP(i, 0, h){
		REP(j, 0, w){
			if(fie[i][j]=='#'){
				ans[i][j] = '#';
				continue;
			}
			int cnt = 0;
			REP(I, i-1, i+2) REP(J, j-1, j+2) {
				if(I==i and J==j) continue;
				if(I<0 or h<=I or J<0 or w<=J) continue;
				if(fie[I][J]=='#') cnt++;
			}
			ans[i][j] = cnt+'0';
		}
		ans[i][w] = ' ';
	}
	REP(i, 0, h) printf("%s
", ans[i]);
	return 0;
}
