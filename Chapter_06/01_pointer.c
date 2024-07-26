#include <stdio.h>

// address of 
//  value at address 

int main(){

    int i = 72;
    int* j = &i; // j is a pointer pointing to i ( j is an integer pointer)
    int k= 67;

    printf("The address of i is %p\n" , &i); // %p or // %u
    printf("The address of i is %p\n" , j);
    printf("The address of k is %p\n", &k);

    printf("The value at address j is %p\n", &i);

    return 0;

}
