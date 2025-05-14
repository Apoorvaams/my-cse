#include <stdio.h>
void printEvenNumbers(int arr[], int size) {
    printf("Even numbers in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    printEvenNumbers(myArray, size);
    return 0;
}

