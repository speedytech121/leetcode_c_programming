

int busyStudent(int* startTime, int startTimeSize, 
                int* endTime, int endTimeSize, int queryTime){
    int result=0;
    int i=0;
    while(i<startTimeSize) {
        if(startTime[i]<=queryTime && endTime[i]>=queryTime){
            result++;
        }
        
        i++;
    }
return result;
}




