#include <stdio.h>

void swap(int* , int*);

void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%d %d",*x ,*y);
}

int main(){
    int x = 10 , y = 20;
    swap(&x , &y);
    return 0;
}
