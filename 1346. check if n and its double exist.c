bool checkIfExist(int* arr, int arrSize){
    for(int i=0;i<arrSize;i++){
        for(int j=0;j<arrSize;j++){
            if(j==i) continue;
            if(arr[j]==(arr[i]*2)) return 1;
        }
    }
    return 0;
}