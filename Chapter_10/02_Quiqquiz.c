#include <stdio.h>

int main(){

    FILE *ptr;
    ptr = fopen("Hello1.txt", "r");
    int num;

    fscanf(ptr,"%d", &num);
    fscanf(ptr,"%d", &num);


    if(num == 0){
        printf("Sorry the file do not exist ");
    }else{
        printf("The value of num is %d \n", num);
        printf("The value of num is %d \n", num);

    }
    fclose(ptr);

    return 0;
}