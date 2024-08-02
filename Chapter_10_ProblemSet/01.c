#include <stdio.h>


// Write a program to read three integers from a file.

int main(){

    FILE *ptr;
    ptr = fopen("Hello.txt" , "r");
    int c;
    int count = 0;
    while(count<3){
        c =fgetc(ptr);
        if(c>0 && c<100){
            printf("%d" , c);
            count++;
        }
    }
    return 0;
}