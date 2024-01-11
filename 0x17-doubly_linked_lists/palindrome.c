#include <stdio.h>

int isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int maxPalindrome = 0;
    int product;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            product = i * j;

            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
            }
        }
    }

    FILE *file = fopen("102-result", "w");
    fprintf(file, "%d", maxPalindrome);
    fclose(file);

    return 0;
}

