#include <stdio.h>

int factorial(int);

int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }else{ 
        return factorial(n-1)*n;
    }

}

int main(){
     int a = 10;
     printf(" the factorial of %d is  %d " , a , factorial(a));
    return 0;
}

//  important notes with recursive functions . 
