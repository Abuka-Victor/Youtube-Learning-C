#include <stdio.h>
#include <stdlib.h>

void printSomething(char *str);
int var = 10;

int main()
{
    int *ptr;
    *ptr = 18;

    char *str = "LOLADE";
    // str[0] = 'L';
    // str[1] = 'O';
    // str[2] = 'L';
    // str[3] = 'A';
    // str[4] = 'D';
    // str[5] = 'E';

    printSomething(str);
}

void printSomething(char *str){
    printf("I will print var: %d\n", var);
    printf("Str is: %s\n", str);
}