// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include<math.h>
int main() {
   
     int num, first_digit, last_digit, num_digits = 0, temp_num, swapped_num;
     printf("Enter a number: ");
     scanf("%d", &num);
     temp_num = num;
     last_digit = num % 10;
     while (temp_num >= 10) {
         temp_num /= 10;
         num_digits++;
     }
     first_digit = temp_num;
     swapped_num = last_digit * pow(10, num_digits) + (num % (int)pow(10, num_digits) / 10 )* 10 + first_digit;
     printf("Swapped number: %d\n", swapped_num);

     return 0;
}