#include <stdio.h>

int main(){
    int i = 5;
    printf(" The value of i is %d\n" , i);


    i = i + 5;
    printf(" The value of i is %d\n" , i);

    i++;
    printf("the value of i is %d\n" , i);

    ++i;
    printf("The value of i is %d\n", i);

    i+= 2; // same as i = i +2
    printf("The value of i is %d\n", i);


    //  i++ prints first and then increments (Post increment operator)
    //  ++i prints last and first increment (pre increment operator)

    return 0;
}