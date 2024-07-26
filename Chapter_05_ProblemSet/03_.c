#include <stdio.h>

// Write a function to calculate force of attraction on a body of mass ‘m’ exerted by 
// earth. Consider g = 9.8m/s2

float g = 9.8;

float force(int );
float force(int mass){ // mass in kg 

    return mass*g;
}

int main(){
    // force(20);
    printf("%.02f" ,force(20) );
    return 0;
}
