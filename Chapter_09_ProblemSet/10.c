// 10. Solve problem 9 for time using ‘typedef’ keyword.

 #include <stdio.h>
 
 typedef struct {
    int hh;
    int mm;
    int ss;
 } time;

 time comparision(time t1 , time t2){
    time comparedTime;

    comparedTime.hh = abs(t1.hh - t2.hh);
    comparedTime.mm = abs(t1.mm - t2.mm);
    comparedTime.ss = abs(t1.ss - t2.ss);

    return comparedTime;
 }

 int main(){
    time t1 , t2 ;
    time comparedTime = comparision(t1,t2);

    printf("Enter the time in this format hh mm ss of incident 1: ");
    scanf("%d %d %d" , &t1.hh ,&t1.mm ,&t1.ss);
    printf("Enter the time in this format hh mm ss of incident 2: ");

    scanf("%d %d %d" , &t2.hh ,&t2.mm ,&t2.ss);

    printf("%d %d %d" , comparedTime.hh, comparedTime.mm , comparedTime.ss);
    
    return 0;
 }