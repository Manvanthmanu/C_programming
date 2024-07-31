// Create a two-dimensional vector using structures in C.
#include <stdio.h>

typedef struct vector{
    int x;
    int y;
} vec;


int main(){
    vec v2;
    vec v1={2,3};
    printf("the values in this vector are %dy , %dj" , v1.x , v1.y);
    
    return 0;
}