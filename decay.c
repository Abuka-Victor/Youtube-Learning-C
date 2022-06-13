#include <stdio.h>
#include <stdlib.h>
#include "myHeader.h"

int main(void)
{
    // Decay
    int numbers[] = {2, 40, 61, 80, 13};

    int *t = numbers;

    printf("Size of numbers: %lu\n", sizeof(numbers));
    printf("Size of pointer t: %lu\n", sizeof(t));
}