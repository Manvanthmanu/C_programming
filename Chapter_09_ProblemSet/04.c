#include <stdio.h>
#include<string.h>

typedef struct college{
    char name[10];
    int regnum;
    char class[10];
} col;
// Write a program to illustrate the use of arrow operator → in C.
int main(){
    col sjcc , vbr;
    col *ptr;
    ptr = &sjcc;
    strcpy(sjcc.name ,"Manvanth");
    sjcc.regnum=39;
    strcpy(sjcc.class ,"3bcomA");

    printf("%s 's roll number is %d and studies in %s" , ptr->name , ptr->regnum ,ptr ->class);
    
    return 0;
}