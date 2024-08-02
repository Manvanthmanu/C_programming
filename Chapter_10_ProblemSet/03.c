#include <stdio.h>

// Write a program to read a text file character by character and write its content 
// twice in separate file.

int main(){

    FILE *ptr;
    FILE *ptr2;
    ptr = fopen("hello1.txt","r");
    ptr2 = fopen("Hello2.txt" , "w");

    char ch1;
    while (ch1!=EOF){
        ch1 = fgetc(ptr);
        printf("%c",ch1);

            fputc(ch1 , ptr2);
    }

    rewind(ptr);

    char ch2;
    while (ch2!=EOF){
            ch2 = fgetc(ptr);
            printf("%c",ch2);

                fputc(ch2 , ptr2);
        }

    return 0;
}