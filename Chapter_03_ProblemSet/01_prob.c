/*

1. What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");

2. Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.

3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.

4. Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.

5. Write a program to determine whether a character entered by the user is
lowercase or not.

6. Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>


int quetion3(){
    // 3. Calculate income tax paid by an employee to the government as per the slabs
    // mentioned below:
    // Income Slab Tax
    // 2.5 – 5.0L 5%
    // 5.0L - 10.0L 20%
    // Above 10.0L 30%
    // Note that there is no tax below 2.5L. Take income amount as an input from the user.

    int revenue;
    printf("Enter total Revenue : ");
    scanf("%d", &revenue);

    if(revenue >= 250000 && revenue <500000){
        printf("so you have to pay 5%% of tax which is %.0f " , revenue*5.0/100.0);
    }
    else if(revenue >= 500000 && revenue <1000000){
        printf("So you have to pay 20%% of tax which is %.0f " , revenue*20.0/100.0);
    }
    else if(revenue>=1000000){
        printf("So you have to pay 30%% of tax which is %.1f " , revenue*30.0/100.0);
    }
    else{
        printf("Lucky guy , no tax , grow rich buddy ");
    }

    return 0;
}


int quetion4(){

    // 4. Write a program to find whether a year entered by the user is a leap year or not.
    // Take year as an input from the user.
    int year;
    printf("Enter the year to cheack wether its a leap year : ");
    scanf("%d" , &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Yes, it is a leap year.\n");
    } else {
        printf("No, it is not a leap year.\n");
    }
    return 0;
}

int quetion5(){
    // 5. Write a program to determine whether a character entered by the user is
    // lowercase or not.
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is lowercase
    if(ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is lowercase.\n", ch);
    } else {
        printf("The character '%c' is not lowercase.\n", ch);
    }

    
    return 0;
}
int quetion6(){
    // 6. Write a program to find greatest of four numbers .
    int num1 = 100;
    int num2 = 80;
    int num3 = 60;
    int num4 = 40;

    if(num1 > num2 && num1 > num3 && num1 > num4) {
        printf("num1 is greatest");
    } else if(num2 > num1 && num2 > num3 && num2 > num4) {
        printf("num2 is greatest");
    } else if(num3 > num1 && num3 > num2 && num3 > num4) {
        printf("num3 is greatest");
    } else {
        printf("num4 is greatest");
    }
}
int main(){
    // 1. What will be the output of this program
    // int a = 10;
    // if (a = 11)
    // printf("I am 11");
    // else
    // printf("I am not 11");

    // int a = 10;
    // if(a == 11){
    //     printf("I am 11");
    // }
    // else{
    //     printf("I am not 11");
    // }


    // 2. Write a program to determine whether a student has passed or failed. To pass, a
    // student requires a total of 40% and at least 33% in each subject. Assume there
    // are three subjects and take the marks as input from the user.

    // int sub1 , sub2 , sub3;

    // printf("\nEnter marks of subject 1 : ");
    // scanf("%d" , &sub1);

    // printf("\nEnter marks of subject 2 : ");
    // scanf("%d" , &sub2);

    // printf("\nEnter marks of subject 3 : ");
    // scanf("%d" , &sub3);


    // float total_avg = ((sub1+sub2+sub3 )/300.0)*100;
    // if(total_avg >= 40){
    //     if(sub1 <33 || sub2 <33 || sub3 <33){
    //         printf("you failed in subjects ");
    //     }
    //     else{
    //         printf("You passed ");
    //     }
    // }
    // else{
    //     printf("You failed overall sir ");
    // }
    // quetion3();
    // quetion4();
    // quetion6();
    quetion5();

    return 0;
}


