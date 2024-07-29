#include <stdio.h>

// Write a program to take string as an input from the user using %c and %s confirm 
// that the strings are equal.


int main(){
    char str1[6];
    for(int i = 0;i<5;i++){
        scanf("%c",&str1[i]);
        fflush(stdin);
    }
    str1[6]='\0';

    printf("%s",str1);
    
    return 0;
}