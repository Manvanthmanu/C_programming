#include <stdio.h>

int main(){
    int marks[90]; // we can go all the way till marks[89]

    printf("Enter marks of 5 students\n");

    for(int i = 0 ; i<5;i++){
      scanf("%d" , &marks[i]);
    }

    for(int i = 0 ; i<5;i++){
      printf("The value of marks at index %d is %d\n" ,i, marks[i]);
    }

    // marks[0]= 45;
    // marks[1] = 95;

    // printf("Marks 0 and marks 1 is %d %d\n", marks[0],marks[1]); // accessing elements 
    return 0;
}

// initialization of array in other ways 