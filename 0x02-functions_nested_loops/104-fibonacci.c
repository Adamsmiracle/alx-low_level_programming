#include "main.h"
#include <stdio.h>

/**
  * main - print first 98 fibonacci numbers starting from 1 and 2
  * Return: 0 (Success)
  */

int main() {
    int prevTerm = 1;
    int currentTerm = 2;

    printf("%d, %d, ", prevTerm, currentTerm);

    for (int i = 3; i <= 98; ++i) {
        int nextTerm = prevTerm + currentTerm;

        printf("%d", nextTerm);

        if (i < 98) {
            printf(", ");
        }

        prevTerm = currentTerm;
        currentTerm = nextTerm;
    }

    printf("\n");

    return 0;
}

