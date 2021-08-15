

int maximum69Number (int num){
    int cp=1,csp=0;
    int temp=num;
    while(temp!=0){
        if((temp%10)==6) csp=cp;
        temp=temp/10;
        cp=cp*10;
        
    }
    return num+(3*csp);
}