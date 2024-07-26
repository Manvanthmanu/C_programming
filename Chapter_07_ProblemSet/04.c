#include <stdio.h>


// Repeat problem 3 for a general input provided by the user using scanf.

int main(){
    int table[10] ;
    int* ptr = table;

    for(int i = 1; i<=10;i++){
        printf("Enter the number %d\n",i);
        scanf("%d" , ptr);
        ptr++;
    }

    for(int i = 0; i<10;i++){
        printf("%d\n", table[i]);
    }
    return 0;
}
