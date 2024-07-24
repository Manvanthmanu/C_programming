#include <stdio.h>

int Quetion1()
{
    // 1. Write a program to print multiplication table of a given number
    int number;
    int i;

    printf("Enter the number for table : ");
    scanf("%d", &number);

    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", number, i, number * i);
    }

    return 0;
}

int Quetion2()
{
    // 2. Write a program to print multiplication table of 10 in reversed order
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n", 10, i, 10 * i);
    }
    return 0;
}

int Quetion3()
{
    // A do while loop is executed:
    //     a. At least once.
    //     b. At least twice.
    //     c. At most once.

    // At least once

    return 0;
}

int Quetion4()
{
    // What can be done using one type of loop can also be done using the other two
    // types of loops – true or false

    // true
    return 0;
}
int Quetion5()
{
    // . Write a program to sum first ten natural numbers using while loop.

    int number = 10;
    int i = 1;
    int j = 0;
    while (i <= number)
    {
        j = j + i;
        i++;
    };

    printf("%d", j);

    return 0;
}

int Quetion6()
{
    // Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.

    int i = 1;
    int j = 0;
    int number = 10;

    for (i; i <= number; i++)
    {
        j = j + i;
    }
    printf(" for loop = %d\n", j);

    i = 0;
    j = 0;

    do
    {
        j = j + i;
        i++;
    } while (i <= number);

    printf("do while = %d", j);
    return 0;
}

int Quetion7()
{
    // Write a program to calculate the sum of the numbers occurring in the
    // multiplication table of 8. (consider 8 x 1 to 8 x 10).
    int tabnum = 8;
    int i;
    int j;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        j = tabnum * i;
        sum = sum + j;
        printf("%d\n", sum);
    }
    printf("%d", sum);

    return 0;
}
int Quetion8()
{
    // Write a program to calculate the factorial of a given number using a for loop.
    int number = 10;
    int i;
    int fact = 1;

    printf("Enter the number : ");
    scanf("%d", &number);

    for (i = number; i; i--)
    {
        fact = fact * i;
    }
    printf("%d", fact);

    return 0;
}
int Quetion9()
{
    //  Repeat 8 using while loop.
    int number;
    int i = 1;
    int fact = 1;

    printf("Enter the number : ");
    scanf("%d", &number);

    while (number)
    {
        fact = fact * number;
        number--;
    }
    printf("%d", fact);

    return 0;
}

int Quetion10()
{
    // 10. Write a program to check whether a given number is prime or not using loops.
    int number;
    printf("Enter the number to check ");
    scanf("%d", &number);

    if (number == 2 || number == 3 && number > 1)
    {
        printf("The number is a prime number");
    }
    else if (number % 2 != 0 && number % 3 != 0 && number > 1)
    {
        printf("The number is a prime number");
    }
    else
    {
        printf("The number is not a prime number ");
    }

    return 0;
}
int Quetion11()
{
    //  Implement 10 using other types of loops.
    // 10. Write a program to check whether a given number is prime or not using loops.

    int number, i, j, iscount =1;

    printf("Please enter the number to check : ");
    scanf("%d", &number);

    if (i <= 1)
    {
        iscount = 0;
    }
    else
    {
        for (i = 2; i <= number / 2; i++)
        {
            
            if (number %i == 0)
            {
                iscount = 0;
                break;
            }
        }
    }

    if(iscount!=1){
        printf("Well it isnt a prime number");
    }else{
        printf("it is a prime number ");
    }

    return 0;
}

int Quetion12(){
    int number, i=2, j, iscount =1;

    printf("Please enter the number to check : ");
    scanf("%d", &number);

    if (number <= 1)
    {
        iscount = 0;
    }
    else
    {
        while(i<=number/2){
            if (number%i == 0)
            {
                iscount = 0;
                break;
            }
            i++;
        }
    }

    if(iscount!=1){
        printf("Well it isnt a prime number");
    }else{
        printf("it is a prime number ");
    }

    return 0;

}

int Quetion13(){
    int number, i=2, j, iscount =1;

    printf("Please enter the number to check : ");
    scanf("%d", &number);

    if (number <= 1)
    {
        iscount = 0;
    }
    else if(number == 2){
        iscount = 1;
    }
    else
    {
        do{
            if (number % i == 0)
            {
                iscount = 0;
                break;
            }
            i++;
        }while(i<=number/2);
            
    }

    if(iscount!=1){
        printf("Well it isnt a prime number");
    }else{
        printf("it is a prime number ");
    }

    return 0;

}

int main()
{
    // Quetion1();
    // Quetion2();

    // Quetion5();
    // Quetion6();
    // Quetion7();
    // Quetion8();
    // Quetion9();
    // Quetion10();
    // Quetion11();
    // Quetion12();
    Quetion13();

    return 0;
}
