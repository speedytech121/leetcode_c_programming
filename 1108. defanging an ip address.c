

char * defangIPaddr(char * address){
    int i=0,j=0;
    int len=strlen(address);
    char *str=malloc(sizeof(char)*(len+7));// 6 for [ and ] and 1 for null character.
    i=0;
    while(address[i]){
        if(address[i]=='.'){
            str[j++]='[';
            str[j++]='.';
            str[j++]=']';
        }
        else{
            str[j++]=address[i];
        }
        i++;
    }
    str[j]='\0';
    return str;
}