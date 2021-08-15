int tribonacci(int n){
    if(n==0) return 0;
    if (n==1 || n==2) return 1;
    int first=0,second=1,third=1;
    int temp;
    for (int i=3;i<=n;i++){
        temp=first;
        first=second;
        second=third;
        third=second+first+temp;
        
    }
    return third;
}

