#include <stdio.h>

// . Write a program using recursion to calculate nth element of Fibonacci series.
// . 0,1,1,2,3,5,8,13,21...


int funct1(int i){
    if(i == 0){
        return 0;
    }
    else if( i ==1){
        return 1;
    }
    else{
        return funct1(i-1) + funct1(i-2);
    }
}


int main(){
    int i=12;
    printf("The fabonacci element at %d is : %d",i, funct1(i));
    return 0;
}
