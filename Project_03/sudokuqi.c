#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 9

void saveToFile(int matrix[SIZE][SIZE], const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            fprintf(file, "%d ", matrix[i][j]);
        }
        fprintf(file, "\n");
    }
    fclose(file);
}

void printMatrix(int matrix[SIZE][SIZE], int mask[SIZE][SIZE]) {
    printf("Sudoku Board:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (mask[i][j]) {
                printf(". ");
            } else {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
}

void userInput(int matrix[SIZE][SIZE], int mask[SIZE][SIZE]) {
    int row, col, value;
    while (1) {
        printf("Enter row (1-9), column (1-9), and value (1-9) separated by spaces (0 0 0 to quit): ");
        scanf("%d %d %d", &row, &col, &value);

        if (row == 0 && col == 0 && value == 0) break;

        if (row < 1 || row > 9 || col < 1 || col > 9 || value < 1 || value > 9) {
            printf("Invalid input! Please enter values within the range.\n");
            continue;
        }

        row--; col--; // Convert to 0-based index
        if (mask[row][col]) {
            matrix[row][col] = value;
            mask[row][col] = 0; // Mark as filled
        } else {
            printf("This cell is already filled!\n");
        }

        printMatrix(matrix, mask);
    }
}

int main() {
    int solution[SIZE][SIZE] = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    int mask[SIZE][SIZE] = {0};

    // Making some values invisible (0 means visible, 1 means invisible)
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            mask[i][j] = rand() % 2;
        }
    }

    // Save the full solution to a file
    saveToFile(solution, "sudoku_solution.txt");

    // Display the board to the user with hidden values
    printMatrix(solution, mask);

    // Allow user to input values
    userInput(solution, mask);

    return 0;
}
