#include<bits/stdc++.h>
#define REP(i,b,e) for(int i=b; i<e; i++)

int sousa(std::string s, char c, int cnt){
	bool uni = true;
	char t[s.size()];
	REP(i, 0, s.size()-1){
		if(s[i]==c or s[i+1]==c) t[i] = c;
		else{
			t[i] = s[i];
			uni = false;
		}
	}
	t[s.size()-1] = ' ';
	if(uni) return cnt+1;
	else return sousa(t, c, cnt+1);
}


int main(){
	std::string s;
	std::cin >> s;
	int ans = s.size()-1;
	for(char c='a'; c<='z'; c++){
		bool uni = true;
		REP(i, 0, s.size()) if(s[i]!=c) uni = false;
		if(uni) ans = 0;
		else ans = std::min(ans, sousa(s, c, 0));
	}
	printf("%d
", ans);
	return 0;
}
