#include<stdio.h>
#include <stdint.h>

int main() {
    int numbers[10];
    int n = 1234567891;

    int getNumberOfDigits(int32_t number) {
        int32_t digits = 0;
        int32_t divider = 10;
        while(number > 0) {
            number = number/divider;
            digits++;
            divider*10;
        }
        return digits;
    }
    int numberOfDigits = getNumberOfDigits(n);

    int concat(int x, int y) {
        int temp = y;
        while (y != 0) {
            x *= 10;
            y /= 10;
        }
        return x + temp;
    }

    int concatDigits(int arrayLength) {
        int result = numbers[0];
        for(int i = 0; i < arrayLength ; i++) {
            result = concat(result, numbers [i+1]);
        }
        return result;
    }

    int *traverseThroughNumber(int number, int numberOfDigits) {
        int divider = 10;
        for(int i = 0; i <= numberOfDigits; i++) {
            int digit = number % divider;
            number = number/divider;
            divider*10;
            numbers[i] = digit;
        }
        int res = concatDigits(numberOfDigits);
        printf("%i", res);
    }
    traverseThroughNumber(n, numberOfDigits);
    
    return 0;
}