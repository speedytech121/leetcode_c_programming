

int longestPalindrome(char * s){
    int len=strlen(s);
    int hash1[26]={0};
    int hash2[26]={0};
        
    for(int i=0;i<len;i++){
        if(isupper(s[i])){  //for capital
            hash1[s[i]-'A']++;
        }
        if(islower(s[i])){ //for lower
            hash2[s[i]-'a']++;
        }
    }    
    
    int result=0;
    for(int i=0;i<26;i++){
        //printf("%d\t%d\n",hash1[i],hash2[i]);
            result=result+((hash1[i]/2)*2);
        
            result=result+((hash2[i]/2)*2);
        
    }
    
    if(len>result) result+=1;
    return result;
}