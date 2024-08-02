#include <stdio.h>
#include<stdlib.h>
// 6. Attempt problem 4 using calloc().
int main(){

    char name;
    char *ptr;

    ptr = (char*) calloc(10,sizeof(char));
    realloc(ptr,5*sizeof(char));
    scanf("%s" , ptr);

    printf("%s , %u" , ptr, &ptr[0]);
    return 0;
}