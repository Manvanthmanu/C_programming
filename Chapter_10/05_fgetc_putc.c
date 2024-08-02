#include <stdio.h>

//  fget c fput c 
int main(){

    FILE *ptr;
    ptr = fopen("Hello.txt" , "r");
    int c = fgetc(ptr);
    printf("%d" , c);
    return 0;
}