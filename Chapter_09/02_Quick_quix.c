#include <stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1,e2;
    printf("Enter the Value of code :\n");
    scanf("%d",&e1.code);

    printf("Enter the Value of salary :\n");
    scanf("%f",&e1.salary);

    printf("Enter the Value of name :\n");
    scanf("%s",&e1.name);



    // strcpy(e1.name , "Harry");
    // e1.salary = 54.44;
    // e1.code = 10;

    printf("%d %f %s" , e1.code , e1.salary , e1.name);

    

    return 0;
}