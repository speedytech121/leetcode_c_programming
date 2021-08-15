

void reverseString(char* s, int sSize){
    int len=sSize-1;
    int i=0;
    int temp=0;
    while(i<len){
        temp=s[i];
        s[i]=s[len];
        s[len]=temp;
        
        ++i;
        --len;
    }

}