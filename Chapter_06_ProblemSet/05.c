#include <stdio.h>

// Write a program using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

int sum(int * a , int*b){

    return *a+*b;
}

int averages(int* a , int*b){

    
    return (*a+*b)/2;
}


int main(){
    int a = 10 , b = 100;
    int summ = sum(&a , &b);
    int averagess = averages(&a,&b);
    int *j = &summ;
    int *k = &averagess;

    printf("The values of sum and averages are %d , %d \n " ,*j , *k);

    return 0;
}
