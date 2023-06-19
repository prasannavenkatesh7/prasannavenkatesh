#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    int temp, digit, newNum;

    // Iterate through each digit
    for (int i = 0; i < 4; i++) {
        divisor = 1;
        temp = num;

        // Exclude the current digit
        for (int j = 0; j < i; j++) {
            divisor *= 10;
            temp /= 10;
        }

        // Create the three-digit number without the current digit
        newNum = (temp / 10) * divisor + (temp % 10);

        // Update the largest number if necessary
        if (newNum > largest) {
            largest = newNum;
        }
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    int result = findLargestNumber(number);
    printf("Largest number after deleting a single digit: %d\n", result);

    return 0;
}
