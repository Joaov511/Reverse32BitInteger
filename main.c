#include<stdio.h>
#include <stdint.h>
#include "digitsOperations.h"

int main() {
    int traverseThroughNumber(int x, int numberOfDigits, int *array) {
        int divider = 10;
        for(int i = 0; i <= numberOfDigits; i++) {
            int digit = x % divider;
            x = x/divider;
            array[i] = digit;
        }
    }
    
    int reverseInteger(int x, int *array) {
        int numberOfDigits = getNumberOfDigits(x);
        int result = traverseThroughNumber(x, numberOfDigits, array);
        int reversedInteger = concatDigits(numberOfDigits, array);
        return reversedInteger;
    }

    int numbers[10];
    int x = 102345;

    int reversedInteger = reverseInteger(x, numbers);
    printf("%i", reversedInteger);

    return 0;
}





