#include <stdio.h>


// Write your own version of strcpy function from <string.h>

int strcpy(char str1[],char str2[]){
    int count=0;

    while(str1[count]!='\0'){
        count++;
    }

    for(int i = 0;i<=count;i++){
        str2[i]=str1[i];
    }
    return 0;
}

int main(){
    char str1[12]="hello world";
    char str2[12];

    strcpy(str1,str2);
    printf("The original and copy are %s and \n%s\n",str1,str2);
    return 0;
}