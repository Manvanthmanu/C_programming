#include <stdio.h>

int main(){
    int age = 45;

    if(age>60){
        printf("You can drive and you are a seniour citizen");
    }
    else if(age>40){
        printf("you can drive and you are elder");
    }
    else if(age>18){
        printf("you can drive");
    }
    else{
        printf("You cannot drive");
    }


    return 0;
}

//  operator precedence 