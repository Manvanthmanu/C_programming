#include <stdio.h>
// Write a program to count the occurrence of a given character in a string
int count(char str[] , char letter){

    int count=0;
    int actualCount = 0;
    while (str[count]!='\0')
    {
        if(letter == str[count]){
            actualCount++;
        }
        count++;
    }
    

    return actualCount;
}

int main(){
    char str[]="hello world";
    char letter='e';
    count(str , letter);
    printf("%d",count(str , letter));
    return 0;
}