#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d\n" , i);
    printf("The value of i is %p\n" , &i);
    printf("The value of i is %p\n" , &j);

    return 0;
}

//  function call 
// call by value ( value ) and call by reference ( addresses )

