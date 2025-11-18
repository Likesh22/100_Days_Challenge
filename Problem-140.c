// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
enum Gender { MALE, FEMALE, OTHER };
struct Person {
    enum Gender gender;
};
int main() {
    struct Person person
        = { .gender = MALE };
    if (person.gender == MALE) {
        printf("Male\n");
    } else if (person.gender == FEMALE) {
        printf("Female\n");
    } else {
        printf("Other\n");
    }
    return 0;
}