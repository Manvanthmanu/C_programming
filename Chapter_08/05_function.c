#include <stdio.h>
#include<string.h>

int main(){

    char st[]="Harry";
    char a1[56]="hello";
    char a2[56]="bhai";

    char source[]="mananth";
    char target[30];
    strcpy(target , source);

    // printf("%s %s",source , target );


    strcat(a1, a2);
    printf("%s %s", a1 , a2);
    return 0;
}