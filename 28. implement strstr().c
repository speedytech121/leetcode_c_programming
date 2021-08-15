
int strstr(a,b){
    
}

int strStr(char * haystack, char * needle){
    if(strlen(needle)==0) return 0;
    char* result=strstr(haystack,needle);
        if(result==NULL)return -1;
        return result-haystack;
}