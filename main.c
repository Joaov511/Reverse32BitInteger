#include<stdio.h>
#include <stdint.h>

void getNumberOfDigits();
void concat();
void concatDigits();
void reverseInteger();
void traverseThroughNumber();


int main() {
    int numbers[10];
    int x = 1000004423;

    int reversedInteger = reverseInteger(x, numbers);
    printf("%i", reversedInteger);

    return 0;
}


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
