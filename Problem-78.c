//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    int sum = 0;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n && i < m; i++) {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}
