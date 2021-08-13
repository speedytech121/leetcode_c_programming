/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *arr = malloc(2 * (sizeof(int))); //memory allocation
    *returnSize = 2;
    int i=0;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j])==target){ //condition
                arr[0]=i; //passing the index 
                arr[1]=j; //passing the index
                goto exit;
             
            }
        }
    }
    exit:
    return arr;
}