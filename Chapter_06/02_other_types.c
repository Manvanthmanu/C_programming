#include <stdio.h>

// address of 
//  value at address 

int main(){

    char i = 'A';
    char* j = &i; // j is a pointer pointing to i ( j is an integer pointer)

    float k = 5.232;
    float *k1 = &k;
    printf("The address of i is %p\n" , &i); // %p or // %u for integer
    printf("The address of j is %c\n" , *j);
    printf("The address of i is %f\n" , *k1);

    printf("The value at address j is %c\n", *(&i));

    return 0;

}
