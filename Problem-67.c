// Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int n, i, pos, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter position and element to insert: ");
    scanf("%d %d", &pos, &key);
    
    if (pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 1;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    printf("Array after insertion: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}