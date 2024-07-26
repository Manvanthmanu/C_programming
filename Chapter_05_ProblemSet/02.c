#include <stdio.h>


float faranhite(int celcius);

float faranhite(int celcius){
    return((celcius-32)*(5.0/9.0));
}

int main(){

    printf("%.02f", faranhite(100));
    return 0;
}
