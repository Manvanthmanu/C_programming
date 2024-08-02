#include <stdio.h>
#include<stdlib.h>

//  write a program to create a dynamic arrey of 5 floats using malloc()
int main(){

    float n = 5;
    float *ptr;

    ptr = (float*)malloc(n*sizeof(float));
    ptr[0]=10.234;
    ptr[1]=10.234;
    ptr[2]=10.234;
    ptr[3]=10.234;
    ptr[4]=10.234;
    for(int i=0;i<5;i++){
        printf("The float of %d is %.2f :\n" , i , ptr[i]);
    }

    return 0;
}