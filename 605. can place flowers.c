
bool canPlaceFlowers(int* flowerbed,int len, int n){
    if(n==0)return true;
    if(len==1 && flowerbed[0]==0 && n==1) return true;
    for(int i=0;i<len;i++){
        if(flowerbed[i]==0){
            if(i==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
                i++;
                
            }else if(i==len-1 && flowerbed[i-1]==0){
                flowerbed[i]=1;
                n--;
                i++;
            }else if(i!=0 && i!=len-1 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
                i++;
            }
        }
        if(n==0) return 1;
    }
    return 0;
}