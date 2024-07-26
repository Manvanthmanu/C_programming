 #include <stdio.h>
 
 int main(){
 
//  If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
// (i) True.
// (ii) False. -- this s
// (iii) Depends.

    int s[3] = {1,3,5};
    

    printf("%d" , *(s+2));
    return 0;
 }
 