
int iseven(int n){
    int countdigit=0;
    while(n!=0){
        countdigit++;
        n=n/10;
    }
    if(countdigit%2==0) return 1;
    return 0;
}
int findNumbers(int* nums, int numsSize){
    int count=0;
    for(int i=0;i<numsSize;i++){
        if(iseven(nums[i])) count++;
    }return count;
}