//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>

int main() {
    float a, b;
    char operator;

    printf("Enter 2 Numbers: ");
    scanf("%f %f %c", &a, &b, &operator);

    switch (operator) {
        case '+':
            printf("%.2f\n", a + b);
            break;
        case '-':
            printf("%.2f\n", a - b);
            break;
        case '*':
            printf("%.2f\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2f\n", a / b);
            } else {
                printf("Not Possible\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("%.2f\n", (int)a % (int)b);
            } else {
                printf("Not Possible\n");
            }
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;
}