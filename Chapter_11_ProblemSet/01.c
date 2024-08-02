#include <stdio.h>
#include <stdlib.h>

//  Write a program to dynamically create an array of size 6 capable of storing 6 
//  integers.

int main(){
    int n =6;
    int *ptr;
    ptr = (int*) malloc(n*sizeof(int));

    for(int i = 0 ; i<n;i++){
        ptr[i]=i;
        printf("%d\n",ptr[i]);
    }
    
        free(ptr);
    return 0;
}