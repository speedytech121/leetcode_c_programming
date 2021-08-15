

int countNegatives(int** grid, int gridSize, int* gridColSize){
    int count=0,j=0;
    int colsize=*gridColSize;
    for(int i=0;i<gridSize;i++){
        for(j=0;(j<colsize) && (grid[i][j]>=0);j++);
        count+=((colsize-j)*(gridSize-i));
        colsize=j;
        
    }
return count;
}