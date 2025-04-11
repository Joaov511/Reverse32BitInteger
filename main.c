#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "digitsOperations.h"

#define INTEGER_32BIT_MAX_LENGTH 10

int reverseInteger(int x, int *array);

int main(int argc, char *argv[]) {
    int numbers[INTEGER_32BIT_MAX_LENGTH];
    int number = atoi(argv[1]);
    
    int reversedInteger = reverseInteger(number, numbers);
    printf("%i", reversedInteger);
    return 0;
}

int reverseInteger(int x, int *array) {
    int numberOfDigits = getNumberOfDigits(x);
    putDigitsIntoArray(x, numberOfDigits, array);
    int reversedInteger = concatDigitsArray(numberOfDigits, array);
    return reversedInteger;
}









