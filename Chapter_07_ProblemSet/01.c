#include <stdio.h>


// Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
// to the third element where ptr is a pointer pointing to the first element of the 
// array
int main(){
    int marks[10]={1,2,3,4,5,6,7,8,9,10};

    int* ptr = marks;
    printf("so the third element should supposedly be %d" , *ptr+3);
    return 0;
}
