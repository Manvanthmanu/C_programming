#include<stdio.h>
#include<math.h>

int sum(int x ,int y){
    printf("this sum is %d\n" , x+y);
}


int main(){
    sum(1,3);
    int a = 20;
    printf("The area of this square is %f\n" , pow(a,2));
    return 0;
}
