#include <stdio.h>
#include <stdlib.h>
#include "digitsOperations.h"

int reverseInteger(int x, int *array);

int main(int argc, char *argv[]) {
    const int maxLength32BitInteger = 10;
    int numbers[maxLength32BitInteger];
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









