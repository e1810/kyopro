
#include<stdio.h>

int main(void){
        char x[200100];
        scanf("%s", x);
        int s = 0,  ans = 0, i;
        for(i=0; x[i]!=' '; i++){
                if(x[i]=='S') s++;
                else if(s){
                        ans++;
                        s--;
                }

        }
        printf("%d
", i-2*ans);
        return 0;
}
