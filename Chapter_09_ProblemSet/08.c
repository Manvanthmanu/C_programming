// Create a structure representing a bank account of a customer. What fields did 
// you use and why

#include <stdio.h>

typedef struct customerAccount{
    char name[20];
    char accountNum[20];
    char ifsc[11];
} bank;

int main(){

    bank b1={"Manvanth","2839840029","hdfc0007"};
    bank *ptr = &b1;
    
    printf("%s %s %s" , ptr->name ,ptr->accountNum , ptr->ifsc);

    
    return 0;
}
//   long long int %lld