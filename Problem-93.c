// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX_LEN 100
#define CHAR_COUNT 256
bool areAnagrams(char str1[], char str2[]) {
    int count[CHAR_COUNT] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (i = 0; str1[i] && str2[i]; i++) {
        count[tolower((unsigned char)str1[i])]++;
        count[tolower((unsigned char)str2[i])]--;
    }

    for (i = 0; i < CHAR_COUNT; i++) {
        if (count[i] != 0) {
            return false;
        }
    }
    return true;
}