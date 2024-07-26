#include <stdio.h>


// Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to 
// a function and print its address. Are these addresses same? Why?
void funct1( int *);

void funct1(int *i){

    int *j = &i;
    printf("The address of the passed i is %u\n", &i);
}


int main(){
    int i = 10;
    int *j = &i;
    printf("The address of i before function is %u\n", *j);
    funct1(&i);

    return 0;
}