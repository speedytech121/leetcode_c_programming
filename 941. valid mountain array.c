

bool validMountainArray(int* arr, int arrSize){
    int i=0,j=arrSize-1;
    while(i<arrSize-1 && arr[i+1]>arr[i]) i++;
    while(j>0 &&arr[j]<arr[j-1]) j--;
    if(i==j && i!=0 && i!=arrSize-1) return 1;
    
    return 0;
}