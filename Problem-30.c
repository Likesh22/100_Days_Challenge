//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main() {
    int num, r = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        r = r * 10 + digit;
        num /= 10;
    }

    printf("Reversed Number: %d\n", r);
    return 0;
}