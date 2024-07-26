#include <stdio.h>

    // Try problem 3 using call by value and verify that it does not change the value of 
    // the said variable        

int funct1(int i){
    i = i*10;
    return 0;
}


int main(){
    int i = 10;

    funct1(i);
    printf("%d" , i);
    return 0;
}
