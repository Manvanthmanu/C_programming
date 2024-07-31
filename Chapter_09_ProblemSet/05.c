#include <stdio.h>

// Write a program with a structure representing a complex number.
typedef struct complex{
    int real;
    int imaginary;
}clx;

int main(){

    clx c1;
    c1.imaginary=10;
    c1.real=20;

    printf("the value of complex number is %d , i%d", c1.imaginary, c1.real);
    return 0;
}