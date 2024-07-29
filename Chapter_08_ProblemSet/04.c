#include <stdio.h>

// Write a function slice() to slice a string. It should change the original string such 
// that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
// for slice.

int slice(char str[] , int m , int n){

    int count=0;
    int j =0;
    while(str[j]!='\0'){
        count++;
        j++;
    }
        int i = 0;
    // printf("%d" , count);

    if(m<0||n>=count||n<m){
        printf("Please enter a valid slicing ");
    }

    for(i=0;i<=n-m;i++){
        
            str[i]=str[m+i];
        }
        
        str[i]='\0'; // this will terminate the string ;
    

    // for(int i = count-(n-m);i;i--){
    //     str[i+(n-m)] ='\0';
    // }
    // printf("%s",str);
    return 0;
}

int main(){
    char str[]="hellotworld";
    int m = 7,n=9;
    slice(str,m,n);

    printf("\n%s",str);
    
    return 0;
}