
// We will write a program that generates a random number and asks the player to guess 
// it. If the player’s guess is higher than the actual number, the program displays “Lower 
// number please”. Similarly, if the user’s guess is too low, the program prints “Higher
// number please”.
// When the user guesses the correct number, the program displays the number of 
// guesses the player used to arrive at the number.
// Hint: Use loop & use a random number generator.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int userNum ;
    int count = 0;
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    printf("%d" , random_number);


while (1)
{
    printf("Please enter your number : ");
    scanf("%d" , &userNum);
    


    if(userNum >100 || userNum <0){
        printf("Please choose a valid input ");
    }
    else{

        if(userNum == random_number){
            count++;

            printf("Hurrey you won the game \n");
            break;
        }
        else if (userNum > random_number)
        {
            count++;
            printf("Lower number please \n");
        }else{
            count++;
            printf("Higher number please \n");
        }
    }
    
}
printf("You took %d chances , the number was %d" , count , random_number);

    return 0;
}
