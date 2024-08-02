#include <stdio.h>

// Take name , salary and ag of two employees as input from the user and write them to 
// a text file in the following format:
// i. Name1, 3300
// ii. Name2, 7700

typedef struct{
    char name[20];
    int salary;
    int age;
} person;

int main(){

    person p1[2];

        FILE *ptr;
        ptr = fopen("person1.txt","a");
        fclose(ptr);

        ptr = fopen("person1.txt","w");

        for(int i=0;i<2; i++){
            printf("Please enter the name : ");
            scanf("%s",&p1[i].name);
            printf("Please enter the salary : ");
            scanf("%d",&p1[i].salary);
            printf("Please enter the age : ");
            scanf("%d",&p1[i].age);
            printf("\n");

            fprintf(ptr , "%d. %s, %d, %d \n" ,i,p1[i].name, p1[i].salary , p1[i].age);

        }
        fclose(ptr);
        

    return 0;
}