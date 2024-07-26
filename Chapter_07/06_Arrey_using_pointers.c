#include <stdio.h>

int main(){
    int marks[] ={12, 34 ,53,77};

    // int* ptr = &marks[0];
    int* ptr = marks;

    for(int i = 0 ; i <4;i++){
        printf("The marks at index %d is %d\n", i , marks[i]);
        *ptr = *ptr+5;
        printf("The marks at index %d is %d\n", i , *ptr);
        ptr++;
    }

    return 0;
}
//  multidimensional arrey ;
