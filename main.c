#include <stdio.h>
#include <stdint.h>
#include "digitsOperations.h"

void traverseThroughNumber(int x, int numberOfDigits, int *array);
int reverseInteger(int x, int *array);

int main() {
    int numbers[10];
    int x = 1012345;

    int reversedInteger = reverseInteger(x, numbers);
    printf("%i", reversedInteger);

    return 0;
}

void traverseThroughNumber(int x, int numberOfDigits, int *array) {
    int divider = 10;
    for(int i = 0; i <= numberOfDigits; i++) {
        int digit = x % divider;
        x = x/divider;
        array[i] = digit;
    }
}

int reverseInteger(int x, int *array) {
    int numberOfDigits = getNumberOfDigits(x);
    traverseThroughNumber(x, numberOfDigits, array);
    int reversedInteger = concatDigitsArray(numberOfDigits, array);
    return reversedInteger;
}









