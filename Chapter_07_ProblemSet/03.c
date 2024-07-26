#include <stdio.h>

// Write a program to create an array of 10 integers and store multiplication table of 
// 5 in it


int main(){
    int table[10] ;
    int* ptr = table;

    for(int i = 1; i<=10;i++){
        *ptr=i*5;
        ptr++;
    }

    for(int i = 0; i<10;i++){
        printf("%d\n", table[i]);
    }
    return 0;
}
