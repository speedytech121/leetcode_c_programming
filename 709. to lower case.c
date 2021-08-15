char * toLowerCase(char * str){
    for(int i=0;i<strlen(str);i++){
            str[i]|=(unsigned)32;
        
    }
return str;
}