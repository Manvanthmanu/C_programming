#include <stdio.h>


// Write a structure capable of storing date. Write a function to compare those 
// dates.

typedef struct d{
    int dd;
    int mm;
    int yyyy;
}date;

date comparision( date p1 , date p2){

    date diff;
    int daysp1 = p1.dd + (p1.mm*30); 
    int daysp2 = p2.dd + (p2.mm*30);

    int daydiff = daysp2 - daysp1;

    if(daydiff<0){
        printf("Person 2 is elder");
    }
    else{
        printf("Person 2 is younger");
    }
    printf("%d", daydiff);


    diff.dd = daydiff%30;
    diff.mm = daydiff/30;
    diff.yyyy = p1.yyyy - p2.yyyy;
    return diff;
}

int main(){
    date p1, p2;
    printf("Enter the date in this format dd mm yyyy of person 1: ");
    scanf("%d %d %d" , &p1.dd ,&p1.mm ,&p1.yyyy);
    printf("Enter the date in this format dd mm yyyy of person 2: ");
    scanf("%d %d %d" , &p2.dd ,&p2.mm ,&p2.yyyy);
    // comparision(p1,p2);
    date diff = comparision(p1,p2);
    printf("so you have %d days %d month and %d years difference : " , diff.dd,diff.mm , diff.yyyy);

    return 0;
}