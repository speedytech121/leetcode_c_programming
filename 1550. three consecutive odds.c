
bool threeConsecutiveOdds(int* arr, int arrSize){
    int temp=0;
    for(int i=0;i<=(arrSize-3);i++){
        if(arr[i]&1==1 && arr[i+1]&1==1 && arr[i+2]&1==1){
            temp+=1;
        }
    }
if(temp==0)return false;
    return true;
}