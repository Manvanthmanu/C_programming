#include <stdio.h>

int main(){
    int n;
    int i = 0;

    printf("enter number : ");
    scanf("%d", &n);

    do{
        printf("%d\n", i);
        i++;
    }while(i<=n);

    return 0;
}
