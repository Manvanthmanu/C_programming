#include <stdio.h>

// Write your own version of strlen function from <string.h>

int strlen(char arr1[]){
    int count=0;
    for(int i=1;i;i++ ){

        if(arr1[i-1]=='\0'){
            return count;
        }
        else{
            count++;
        }
    }
    
    return 0;
}

int main(){
    char arr1[]="helloo";
    strlen(arr1);
    printf("%d",strlen(arr1));
    return 0;
}