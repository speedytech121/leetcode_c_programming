int searchInsert(int* nums, int numsSize, int target){
    int i=0;
    for(i=0;i<numsSize && nums[i]<target;i++);
    return i;    
}