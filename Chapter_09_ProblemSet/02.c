#include <stdio.h>

// Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
// The vectors must be two–dimensional.

 typedef struct vector{
    int x;
    int y;
 } vec;

vec sumVector(vec vec1, vec vec2){
    vec vec3={vec1.x+vec2.x , vec1.y + vec2.y};
    return vec3;
}

int main(){
    
    vec vec1={2,4};
    vec vec2={3,5};


    vec vec3 = sumVector(vec1, vec2);

    printf("The sum of both vectors would be %dx and %dy" , vec3.x , vec3.y);


    return 0;
}