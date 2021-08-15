/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize){
     int i,left=0,right=ASize-1, *arr;
    *returnSize = ASize;
    arr = (int*)malloc(sizeof(int)*ASize);
    while(i<ASize){
        if(A[i]%2==0)
            arr[left++]=A[i];
        else
            arr[right--]=A[i];
        i++;
    }
    return arr;
}