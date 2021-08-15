

int removeElement(int* nums, int numsSize, int val){
    int i=0,j=numsSize-1,temp;
    while(i<=j){
        while(i<=j && nums[i]!=val) i++;
        while(i<=j && nums[j]==val) j--;
        if(i<=j){
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
    return i;
}