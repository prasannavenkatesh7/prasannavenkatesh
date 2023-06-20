#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    float average;

    // Calculate the sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate the average
    average = (float) sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}