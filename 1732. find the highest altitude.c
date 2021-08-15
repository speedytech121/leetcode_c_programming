

int largestAltitude(int* gain, int gainSize){
    int var=0;
    int temp=0;
    for(int i=0;i<gainSize;i++){
        temp=temp+gain[i];
        if (temp>var){
            var=temp;
        }
    }
return var;
}