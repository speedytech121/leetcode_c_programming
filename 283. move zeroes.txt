void moveZeroes(int* nums, int numsSize){
   int i=0,j=0,k=0;
    while(i<numsSize && j<numsSize){
        if(nums[i]==0){
            if(k==0){
                j=i+1;
                k=1;
            } //this condition is for intializing j=i+1 only one time it will reduce time complexity
        while(j<numsSize && nums[j]==0)j++;
            if(j<numsSize){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }i++;
    }
}