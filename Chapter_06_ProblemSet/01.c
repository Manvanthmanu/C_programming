#include <stdio.h>

// Write a program to print the address of a variable. Use this address to get the 
// value of the variable.

int main(){
    int i = 10;
    int*j = &i;

    printf("The address of variable i is %p\n" ,&i );
    printf("The value of the variable is %d" , *j);
    return 0;
}
