int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int temp=0;
    for(int i=0;i<accountsSize;i++){
        int sum=0;
        for(int j=0;j<accountsColSize[i];j++){
            sum=sum+accounts[i][j];
        }
        //temp = (int) fmax(temp,sum);
        if(sum>temp)temp=sum;
        else continue;
    }
    return temp;
}