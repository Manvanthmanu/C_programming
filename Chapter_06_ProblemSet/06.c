#include <stdio.h>


// Write a program to print the value of a variable i by using “pointer to pointer” type 
// of variable.
int main(){
    int i = 10;
    int *j = &i;
    int **k = &j;
    int ***m = &k;

    printf("The vaalue of i is %u\n" , ***m);
    return 0;
}
