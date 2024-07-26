#include <stdio.h>

//     Write a program containing functions which counts the number of positive 
//     integers in an array.


int funct1(int arr1[]){
    int count=0;

    for(int i = 0;i<9;i++){
        if(arr1[i]>0){
            count++;
            continue;
        }
    }
    return count;
}


int main(){
    int arr1[9] = {1,2,3,4,-1,3,0,-2,5};

    int c = funct1(arr1);
    printf("\n%d",c);
    return 0;
}
