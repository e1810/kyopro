main(n,c){
        n = 0;
        char ans[11];
        while((c=getchar())!='
'){
                if('0'<=c && c<='9') ans[n++] = c;
        }
        ans[n] = ' ';
        printf("%s
", ans);
        return 0;
}
