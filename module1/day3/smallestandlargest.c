#include <stdio.h>
#include <limits.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = INT_MAX;
    int largestDigit = INT_MIN;
    int i, j, currentDigit, currentNumber;

    for (i = 0; i < n; i++) {
        currentNumber = numbers[i];

        while (currentNumber != 0) {
            currentDigit = currentNumber % 10;

            if (currentDigit < smallestDigit) {
                smallestDigit = currentDigit;
            }

            if (currentDigit > largestDigit) {
                largestDigit = currentDigit;
            }

            currentNumber /= 10;
        }
    }

    if (smallestDigit == INT_MAX && largestDigit == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n, i;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    int numbers[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findSmallestLargestDigits(n, numbers);

    return 0;
}
