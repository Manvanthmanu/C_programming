// Snake, water, gun or rock, paper, scissors is a game most of us have played during
// school time. (I sometimes play it even now).
// Write a C program capable of playing this game with you.
// Your program should be able to print the result after you choose snake/water or gun.
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>

int randomnum()
{
    srand(time(NULL));
    int random = rand();

    int lower = 0;
    int upper = 2;
    int rangeRandomNumber = (rand() % (upper - lower + 1)) + lower;

    return rangeRandomNumber;
}

void entername(char *name, size_t size)
{

    printf("Please enter your name ");
    fgets(name, size, stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
    }
      FILE *  ptr;
        ptr = fopen("data.txt", "a");
        fprintf(ptr, "\nName : %s ;\n", name);

        fclose(ptr);
}

void game(int *computer, int *user )
{

    printf("please enter snake water or gun , 0 for snake , 1 for water and 2 for gun : \n");
    printf("Play of 3 , win = 2 , loss = 0 , draw = 1\n\n\n");

    // int user, computer;
    int winscore = 0;
    FILE *ptr;
    ptr = fopen("data.txt", "a");

    for (int i = 0; i < 3; i++)
    {
        *computer = randomnum();
        printf("Please enter the input : ");
        scanf("%d", user);

        if (*computer == 0)
        {
            if (*user == 0)
            {
                winscore++;
                printf("That is a draw. computer choose %d you choose %d \n:",*computer,*user);
                printf("score is %d \n\n", winscore);
            }
            else if (*user == 1)
            {
                printf("That is a loss. computer choose %d you choose %d \n:",*computer,*user);
                printf("score is %d \n\n", winscore);
            }
            else
            {
                winscore += 2;
                printf("That is a win. computer choose %d you choose %d \n:",*computer , *user);
                printf("score is %d \n\n", winscore);
            }
        }
        else if (*computer == 1)
        {
            if (*user == 1)
            {
                winscore++;
                printf("That is a draw. computer choose %d you choose %d \n:",*computer,*user);
                printf("score is %d \n\n", winscore);
            }
            else if (*user == 2)
            {
                printf("That is a loss. computer choose %d you choose %d \n:",*computer,*user);
                printf("score is %d \n\n", winscore);
            }
            else
            {
                winscore += 2;
                printf("That is a win. computer choose %d you choose %d \n:" , *computer , *user);
                printf("score is %d \n\n", winscore);
            }
        }else{
            if (*user == 2)
            {
                winscore++;
                printf("That is a draw. computer choose %d you choose %d \n:",*computer,*user);
                printf("score is %d \n\n", winscore);
            }
            else if (*user == 0)
            {
                printf("That is a loss. computer choose %d you choose %d \n:",*computer,*user);
                printf("score is %d \n\n", winscore);
            }
            else
            {
                winscore += 2;
                printf("That is a win. computer choose %d you choose %d \n:" , *computer , *user);
                printf("score is %d \n\n", winscore);
            }
        }
        fprintf(ptr , "%d. %d , %d , %d \n" , i+1 , *computer, *user, winscore);
    }
        printf("The final score is %d \n\n", winscore);
}

    int main(){

        char name1[20];
        // entername();
      

        int computer, user;

        entername(name1, sizeof(name1));
        game(&computer, &user );
        // uploadData(computer, user);

        // printf("%d", randomnum());

        return 0;
    }
