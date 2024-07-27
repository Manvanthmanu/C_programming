#include <stdio.h>

// . Repeat problem 7 for a custom input given by the user.


int main(){


    int table[3][10];
    int a,b,c;

    printf("Please enter Table 1 : ");
    scanf("%d",&a);

    printf("Please enter Table 1 : ");
    scanf("%d",&b);

    printf("Please enter Table 1 : ");
    scanf("%d",&c);

    int*ptr1 = &table[0][0];
    int*ptr2 = &table[1][0];
    int*ptr3 = &table[2][0];

    for(int i = 1;i<=10;i++){
        *ptr1 = a*i;
        *ptr2 = b*i;
        *ptr3 = c*i;
        ptr1++;
        ptr2++;
        ptr3++;
    }

    for(int i=0;i<10;i++){
        for(int j=0;j<3;j++){
            printf("%d ",table[j][i]);
        }
        printf("\n");
    }

    return 0; 
}