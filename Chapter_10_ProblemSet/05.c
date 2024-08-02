#include <stdio.h>

// Write a program to modify a file containing an integer to double its value.

int main(){

    FILE *ptr;
    FILE *ptropen;

    ptropen=fopen("Hello.txt","r");
    int a;
    fscanf(ptropen ,"%d" ,&a);
    fclose(ptropen);
    printf("%d",a);


    ptr = fopen("Hello.txt","a");
    fprintf(ptr,"\t%d",a*2);
    printf("%d",a*2);

    fclose(ptr);
    return 0;
}