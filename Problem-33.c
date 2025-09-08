// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, Num, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    Num = num;

    while (Num != 0) {
        Num /= 10;
        ++n;
    }

    Num = num;

    while (Num != 0) {
        remainder = Num % 10;
        result += pow(remainder, n);
        Num /= 10;
    }
    
    if ((int)result == num)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}