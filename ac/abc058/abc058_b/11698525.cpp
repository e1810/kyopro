
#include<bits/stdc++.h>

int main(){
	char s[2][60];
	scanf("%s %s", s[0], s[1]);
	for(int i=0; s[i%2][i/2]!=' '; i++) putchar(s[i%2][i/2]);
	putchar('
');
	return 0;
}
