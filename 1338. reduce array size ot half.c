
void selectionsort(int *a, int len){
    int minindex,temp;
    for(int pass=1;pass<len;pass++){
        minindex=pass-1;
        for(int i=pass;i<len;i++){
            if(a[i]<a[minindex]) minindex=i;
            
        }
        temp=a[minindex];
        a[minindex]=a[pass-1];
        a[pass-1]=temp;
        
    }
}

int minSetSize(int* arr, int arrSize){
    int n=arrSize;
    int hsize=arrSize/2;
    int hash[100001]={0};
    
    for(int i=0;i<arrSize;i++){
        hash[arr[i]]++;
    }
    selectionsort(hash,100001);
    
    int number=0;
    for(int i=0;i<=100000;i++){
        n=n-hash[i];
        number++;
        if(n<=hsize) break;
        
    }
    return number;
}
    