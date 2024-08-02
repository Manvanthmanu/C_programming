#include <stdio.h>
#include <stdlib.h>
// dynamic memory allocation using malloc  , calloc() , free() , realoc();
int main(){

    int n;
    int* ptr;

    scanf("%d", &n);
    ptr = (int*)malloc(n*sizeof(int));

    ptr[0]=3;
    ptr[1]=6;
    // int arr[n]; // not allowed in c ;

    printf("%d" , ptr[0]);
    return 0;
}