#include <stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("Hello.txt" , "a");
    fprintf(ptr , "%d" , 434);
    fclose(ptr);
    return 0;
}