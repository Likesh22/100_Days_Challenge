// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
int main() {
    char binary[65];
    char ones[65];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);
    
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) 
    {
        if (binary[i] == '0') {
            ones[i] = '1';
        } else if (binary[i] == '1') {
            ones[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }
    ones[length] = '\0';
    
    printf("1's complement: %s\n", ones);
    return 0;
}