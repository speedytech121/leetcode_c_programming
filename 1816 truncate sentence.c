

char * truncateSentence(char * s, int k){
    int i=0;
    while(s[i++]!='\0'){
        if(s[i]==' ') k--;
        if(k==0) s[i]='\0';
    }
    return s;
}