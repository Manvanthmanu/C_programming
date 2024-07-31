#include <stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){

    struct employee facebook[100];

    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee lol={10,10.33,"Manvanth"};

    printf("%d %f %s" , lol.code,lol.salary , lol.name);

    return 0;
}