#include <stdio.h>

// Create an array of 5 complex numbers created in Problem 5 and display them
// with the help of a display function. The values must be taken as an input from 
// the user.

typedef struct c{
    int real;
    int imaginary;
}complex;

void display(complex com){
    printf("the value of complex number is %d , i%d\n", com.real, com.imaginary);
}
int main(){

    complex com[5];
    for(int i= 0;i<=5;i++){
        printf("Enter the real and imaginary value of complex  : ");
        scanf("%d %d",&com[i].real , &com[i].imaginary);
        display(com[i]);
    }
    return 0;
}