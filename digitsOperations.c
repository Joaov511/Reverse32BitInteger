#include "digitsOperations.h"

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

int concatDigits(int arrayLength, int *array) {
    int numberConcat = array[0];
    for(int i = 0; i < arrayLength ; i++) {
        numberConcat = concat(numberConcat, array[i+1]);
    }
    return numberConcat;
}