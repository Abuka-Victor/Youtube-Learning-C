#include <stdio.h>
#define SIZE 5

// Global
int c;
const int variable;

int main(void)
{
    // Implicit Declaration
    char vowels[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    printf("The string is: %s\n", vowels);

    // printf("The value of the array is: %p\n\n", vowels);

    // printf("The value of the first element is: %p\n\n", &vowels[0]);

    // Explicit Declaration
    int numbers[SIZE];

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    // printf("Array value at number 2: %d\n", numbers[2]);

    printf("Index\tValue\n");

    int i;
    for (i = 0; i < SIZE; i++)
        printf("%2d%10d\n", i, numbers[i]);


// // numbers[3] == *(numbers + 3) == *(3 + numbers) == 3[numbers]

// 3[numbers]
    printf("Wonky: %d\n", 3[numbers]);
}