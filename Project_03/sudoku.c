#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

//  sudoku game ;



void UserInput(int solution[SIZE][SIZE] , int matrix[SIZE][SIZE])
{
    int row, column, answer;
    printf("Enter row , column and answer ( 1 1 3)\nEnter 0 0 0 to quit : ");

    while (1)
    {
        scanf("%d %d %d", &row, &column, &answer);
        if (row == 0 && column == 0 && answer == 0)
        {
            printf("You Quitter : ");
            break;
        }
        if (row < 1 || row > 9 || column < 1 || column > 9 || answer < 1 || answer > 9) {
            printf("Invalid input! Please enter values within the range.\n");
            continue;
        }
        row--;column--;
            if (matrix[row][column]) {
            solution[row][column] = answer;
            matrix[row][column] = 0; // Mark as filled
        } else {
            printf("This cell is already filled!\n");
        }
        displayMatrix(solution, matrix);
        
    }
}

void displayMatrix(int solution[SIZE][SIZE] , int matrix[SIZE][SIZE])
{
     printf("Sudoku Board:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j]) {
                printf(". ");
            } else {
                printf("%d ", solution[i][j]);
            }
        }
        printf("\n");
    }
}

int main()
{

    int solution[SIZE][SIZE] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}};


    srand(time(0));
    int matrix[SIZE][SIZE] = {0};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        { // if 1 display if 0 do  not display
            matrix[i][j] = rand() % 2 ;
            printf("%d" , matrix[i][j]);
        }
        printf("\n");
    }
    displayMatrix(solution, matrix);

    UserInput(solution , matrix);
    return 0;
}