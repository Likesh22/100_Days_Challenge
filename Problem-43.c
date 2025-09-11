// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    int num, temp_num, digit, sum_of_factorials = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp_num = num;
    while (temp_num > 0) {
        digit = temp_num % 10;
        sum_of_factorials += factorial(digit);
        temp_num /= 10;
    }
    if (sum_of_factorials == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    return 0;
}