#include <stdio.h>

// Write a program containing a function which reverses the array passed to it

int main(){
    int arr1[5] = {1,2,4,5,6};
    int arr2[5];

    int*ptr = arr1;
    int*ptr2 = arr2;

    for(int i =5;i;i--){
        
        printf("%d\n" , arr1[i-1]);
        int temp = arr1[i-1];

        *ptr2 = temp;
        ptr2++;
        
    }

    for(int i = 0;i<5;i++){
        printf("%d " , arr2[i]);
    }

    return 0;
}
