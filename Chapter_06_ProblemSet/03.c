#include <stdio.h>

// Write a program to change the value of a variable to ten times of its current 
// value
int funct1(int* i){
    *i = *i*10;
    return 0;
}


int main(){
    int i = 10;

    funct1(&i);
    printf("%d" , i);
    return 0;
}
