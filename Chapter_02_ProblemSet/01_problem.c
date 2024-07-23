#include <stdio.h>

// Quetion - 1   which of the following is invalid in C?
// int a = 1;
// int b = a;
// int v = 3*3;
// char jv = 'ahioioin' X 

//  Quetion - 2   what data type will 3.0/8-2 return?
// float 

//  Quetion - 3   Write a program to check whether a number is divisible by 97 or not.

//  Quetion - 4   Explain step by step evaluation of 3*x/y - z+k , where x = 2 , y = 3 , z = 3 , k = 1
    // 3*2/3 - 3+1
    // 2 - 3+1
    // 0

//  Quetion - 5   3.0 + 1 will be : a > integer , b > floating point number. , c > Character .
//  b 


int main(){
    int number;

    printf("Please enter the number : ");
    scanf("%d" , &number);

    int mod = 97 % number;

    if (mod == 0)
    {
        printf("Yes it is divisible by 97\n");
    }
    else{
        printf("sorry");
    }
    
    printf("%d",mod);
    return 0;
}
