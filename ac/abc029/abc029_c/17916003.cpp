#include<bits/stdc++.h>
using namespace std;
#define REP(i,b,e) for(int i=b; i<e; i++)

int main(){
	int n;
	scanf("%d", &n);
	std::function<void(int,string)> dfs = [&](int d, string s){
		if(d==0) cout << s << '
';
		else for(char c:"abc") if(c!=' ') dfs(d-1, s+c);
	};
	dfs(n, "");
	return 0;
}
