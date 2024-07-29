#include <stdio.h>

// Write a program to decript a string by sub 1 to the ascii value of its 
// characters

int decrypt(char str1[]){
    int count=0;
    while(str1[count]!='\0'){
        count++;
    }

    for(int i=0;i<count;i++){
        str1[i]=str1[i]-1;
    }
    printf("The decrypted text is %s" ,str1);
    
    return 0;
}

int main(){
    char str1[10];
    int count=0;

        
    printf("Enter the encripted text : ");
    fgets(str1,10,stdin);
    while (str1[count]!='\0')
    {
        while (str1[count]=='\n')
        {
            str1[count]='\0';
            break;
        }
        count++;
        /* code */
    }
    
    
    

    decrypt(str1);

    return 0;
}