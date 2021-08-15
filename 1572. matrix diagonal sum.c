

int diagonalSum(int** mat, int matSize, int* matColSize){
    int sum=0;
    for(int i=0;i<matSize;i++){
        sum+=mat[i][i];
    }
    for(int i=0,j=(*matColSize-1); i<matSize,j>=0;i++,j--){
        if(i!=j)sum+=mat[i][j];
    }return sum;
}