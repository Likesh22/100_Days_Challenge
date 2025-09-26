// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
#define MAX 100

int main() {
    int rows, cols;
    int matrix[MAX][MAX];
    int sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Output: %d\n", sum);

    return 0;
}
