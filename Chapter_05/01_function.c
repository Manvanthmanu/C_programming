#include <stdio.h>


// Function prototype
int sum(int , int);

// function definition
int sum(int x ,int y){
    printf("this sum is %d\n" , x+y);
}

// void function


int main(){
    int a = 10;
    int b = 20;

    int c = a+b;
    printf("The value of c is %d\n", c);

    sum(a,b);
    return 0;
}
