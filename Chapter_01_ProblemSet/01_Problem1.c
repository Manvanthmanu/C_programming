#include <stdio.h>


// Problem 1 : Write a c program to calculate the area of a rectangle 
//              a ) Using Hard Coded inputs
//              b ) Using user given inputs

// Problem 2 : Calculate the area of a circle and modify the same programm
//             to calculate the volume of a cylinder given its radius and height.

// Problem 3 : Write a program to calculate celcius ( centegrade degree to faranhite )

// Problem 4 : Write a Program to calculate simple interest for a set of values
//             representing , principal , no of years  and rote of interest


int prob_1a(){
    int l = 10;
    int b = 20;
    printf("The area of rectangle where length of %d and width of %d is : %d", l , b,l*b);

    return l*b;
}

int prob_1b(){
    int l , b;
    printf("Enter the Length : ");
    scanf("%d",&l);
    printf("Enter the Breadth : ");
    scanf("%d",&b);

    printf("The area of rectangle where length of %d and width of %d is : %d", l , b,l*b);
    return l*b;

}

int prob_2(){
    //  area of a circle 
    int r ;
    float pi ,f; 
    printf("Enter Radious : ");
    scanf("%d" , &r );
    pi = 22.0/7.0;
    f = pi*r*r;



    printf("The area of the circle is : %f" ,f);
    

    // volume of a cylinder
    int height ;
    printf("\nEnter the Height : ");
    scanf("%d", &height);

    printf("\nThe volume of the cylinder is : %f" , pi*r*r*height);

    return 0;

}

int prob_3(){

    int celcius;
    printf("\nEnter Celcius : ");
    scanf("%d" , &celcius);

    printf("\nThe new Faranhite is : %d" , (celcius*9/5)+32);

    return celcius*5/9+32;
}

int prob_4(){
    int principals , rate, time;
    float si;

    printf("\nEnter Principal amount : ");
    scanf("%d" , &principals);

    printf("\nEnter Rate of interest : ");
    scanf("%d" , &rate);

    printf("\nEnter Time Period : ");
    scanf("%d", &time );

    si = principals*rate* time/100;

    printf("\nThe simple interst is : %f" , si);
    return si;
}

int main(){
    // prob_1a();
    // prob_1b();
    // prob_2();
    // prob_3();
    prob_4();

    return 0;
}
