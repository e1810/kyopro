#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	char ans[100][101];
	REP(i, 0, 50) REP(j, 0, 100) ans[i][j] = '#';
	REP(i, 50, 100) REP(j, 0, 100) ans[i][j] = '.';
	REP(i, 0, 100) ans[i][100] = ' ';

	REP(i, 0, 50) REP(j, 0, 100) if(!(i&1) && j&1) {
		if(--a<=0) break;
		ans[i][j] = '.';
	}
	REP(i, 50, 100) REP(j, 0, 100) if(i&1 && j&1) {
		if(--b<=0) break;
		ans[i][j] = '#';
	}

	puts("100 100");
	REP(i, 0, 100) printf("%s
", ans[i]);
	return 0;
}
