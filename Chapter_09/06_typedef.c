#include <stdio.h>
#include<string.h>

typedef struct student{
    int regnum;
    float marks;
    char name[10];

} sjcc;

int main(){
    typedef int harry;
    // typedef struct student sjcc;

    sjcc std1;
    std1.regnum=33;
    std1.marks = 100.33;
    strcpy(std1.name,"Manvnath");


    harry a=88;

    printf("The value of a is %d \n", a);

    printf("%d , %f , %s" , std1.regnum, std1.marks , std1.name);
    return 0;
}