#include <stdio.h>





int mainsum(int n){
    if(n==1){
        return 1;
    }else{
        return mainsum(n-1) + n;
    }
}


int main(){
    // Write a recursive function to calculate the sum of first ‘n’ natural numbers. 
    int i = 5;
    printf("The sum of first %d natural numbers is : %d" , mainsum(i));
    return 0;
}
