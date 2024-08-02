#include <stdio.h>
#include <stdlib.h>

// Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to 
// make it store 15 number (from 7 x 1 to 7 x 15).

int main(){

    int n =10;
    int *ptr;

    ptr = (int*) malloc(n*sizeof(int));

    for(int i = 0;i<n ;i++){
        ptr[i] = (i+1)*7;
    }

    realloc(ptr,15*sizeof(int));

    for(int i = 10;i<15;i++){
        ptr[i]=(i+1)*7;
    }

    for(int i = 0 ; i<15 ; i++){
        printf("%d X %d X %d \n" ,7 , i+1,ptr[i]);
    }
    return 0;
}