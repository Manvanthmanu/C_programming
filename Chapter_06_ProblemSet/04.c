#include <stdio.h>


// Write a function and pass the value by reference.
 int sum(int* i , int* j){
    
    return (*i)*(*j);
 }
 
int main(){

    int a = 7 , b =8;
    printf("Hello world the multiplication  is %d" , sum(&a,&b));
    return 0;
}
