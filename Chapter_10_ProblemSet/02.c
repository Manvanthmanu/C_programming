#include <stdio.h>

int main(){
    int num;
    FILE *ptr;

    ptr = fopen("hello1.txt","a");

    printf("Enter number to multiply :\n");
    scanf("%d" , &num);

    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n" , num,i,num*i);
        fprintf(ptr,"%d X %d = %d\n", num,i,num*i);
    }
    return 0;
}

// Write a program to generate multiplication table of a given number in text 
// format. Make sure that the file is readable and well formatted.