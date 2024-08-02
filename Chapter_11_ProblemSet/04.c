#include <stdio.h>
#include <stdlib.h>


// Create an array dynamically capable of storing 5 integers. Now use realloc so 
// that it can now store 10 integers.

int main(){
    char name;
    char *ptr;

    ptr = (char*) malloc(10*sizeof(char));
    realloc(ptr,5);
    scanf("%s" , ptr);

    printf("%s , %d" , ptr , sizeof(ptr));
    
    return 0;
}