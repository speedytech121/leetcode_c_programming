

char * restoreString(char * s, int* indices, int indicesSize){
    int arrsize=strlen(s);
    char *str1=(char*)malloc((indicesSize+1)* sizeof(char));
    for(int i=0;i<indicesSize;i++){
        str1[indices[i]]=s[i];
    }
    str1[indicesSize] = '\0';
    return str1;
}