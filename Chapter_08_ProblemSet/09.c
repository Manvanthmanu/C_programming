#include <stdio.h>


// Write a program to check whether a given character is present in a string or not
int ispresent(char str1[],char char1){

    int count = 0;
    while(str1[count]!='\0'){
        if(str1[count]==char1){
            return 1;
        }
        count++;
    }

    return 0;
}


int main(){
    char str1[]="Hello world";
    char char1='o';
    int answer = ispresent(str1,char1);

    if(answer==0){
        printf("False\n");
    }
    else{
        printf("True\n");
        }
    return 0;
}