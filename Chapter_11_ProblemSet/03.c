#include <stdio.h>
#include<stdlib.h>
// 3. Solve problem 1 using calloc().
int main(){
int n =6;
    int *ptr;
    ptr = (int*) calloc(n,sizeof(int));

    for(int i = 0 ; i<n;i++){
        ptr[i]=i;
        printf("%u\n",&(ptr[i]));
    }
    
        free(ptr);
    return 0;
}