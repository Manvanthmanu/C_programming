#include <stdio.h>
#include<stdlib.h>

int main(){
    int n=10;
    int *ptr;

    ptr = (int*) malloc(n*sizeof(int));
    realloc(ptr , 20);

    for(int i = 0;i<20;i++){
        ptr[i]=i;
        printf("%d\n" , ptr[i]);
        free(ptr);
    }

    
    return 0;
}