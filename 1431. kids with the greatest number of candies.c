/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    bool *solution = (bool *) malloc(sizeof(bool) * candiesSize);

    int max=candies[0];
    for(int i=1;i<candiesSize;i++){
        if(max<candies[i]){
            max=candies[i];
        }
    }
    for(int i=0;i<candiesSize;i++){
        if((candies[i]+extraCandies)>=max){
            solution[i]=true;
        }
        else{
            solution[i]=false;
        }
    }
    return solution;

}