#include <stdio.h>

int main(){

    int j = 10;

    // Write a program using function to print the following pattern (first n lines)
    // *
    // ***
    // *****


        
        int k =1;

        for(int i = 1 ; i <= j ; i++  ){
            for(int i=1 ; i<=k ; i++){
                printf("*");
            }
            k = k + 2;
            printf("\n");
        }


    return 0;
}
