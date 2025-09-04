/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int sec;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    int hours = sec / 3600;
    int minutes = (sec % 3600) / 60;
    int remaining_seconds = sec % 60;
    printf("%d:%d:%d\n", hours, minutes, remaining_seconds);
    return 0;
}
