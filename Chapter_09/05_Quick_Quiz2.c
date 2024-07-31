#include <stdio.h>


struct employee{
    int code;
    float salary;
    char name[10];
};

void lol(struct employee e1)
{
    struct employee *ptr;
    ptr = &e1;
    e1.code=10;
    printf("%d",ptr->code);
}
int main(){

    struct employee e1 , e2;
    lol( e1);
    
    return 0;
}