#include <stdio.h>

float averages(int , int , int);

float averages(int num1 , int num2 , int num3){
    return((num1+num2+num3)/3.0);
}

int main(){
    // 1. Write a program using function to find average of three numbers.
    printf("%.2f",averages(10,20,35));
    return 0;
}
