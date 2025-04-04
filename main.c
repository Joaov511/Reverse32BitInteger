#include <stdio.h>
#include <stdint.h>
#include "digitsOperations.h"

int reverseInteger(int x, int *array);

int main() {
    int numbers[10];
    int x = 1012345;
    int reversedInteger = reverseInteger(x, numbers);
    printf("%i", reversedInteger);

    return 0;
}

int reverseInteger(int x, int *array) {
    int numberOfDigits = getNumberOfDigits(x);
    putDigitsIntoArray(x, numberOfDigits, array);
    int reversedInteger = concatDigitsArray(numberOfDigits, array);
    return reversedInteger;
}









