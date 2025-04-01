#include<stdio.h>
#include <stdint.h>

int main() {
    int numbers[10];
    int x = 123764365;

    int getNumberOfDigits(int number) {
        int numberOfDigits = 0;
        int divider = 10;
        while(number > 0) {
            number = number/divider;
            numberOfDigits++;
        }
        return numberOfDigits;
    }

    int concat(int x, int y) {
        int temp = y;
        while (y != 0) {
            x *= 10;
            y /= 10;
        }
        return x + temp;
    }

    int concatDigits(int arrayLength) {
        int numberConcat = numbers[0];
        for(int i = 0; i < arrayLength ; i++) {
            numberConcat = concat(numberConcat, numbers [i+1]);
        }
        return numberConcat;
    }

    int traverseThroughNumber(int x, int numberOfDigits) {
        int divider = 10;
        for(int i = 0; i <= numberOfDigits; i++) {
            int digit = x % divider;
            x = x/divider;
            numbers[i] = digit;
        }
        int reversedInteger = concatDigits(numberOfDigits);
        return reversedInteger;
    }

    int numberOfDigits = getNumberOfDigits(x);
    int result = traverseThroughNumber(x, numberOfDigits);
    printf("%i", result);
    
    return 0;
}