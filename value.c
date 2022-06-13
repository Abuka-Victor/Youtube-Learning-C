#include <stdio.h>

int addOne(int *number)
{
    (*number)++;
    return (*number);
}

int main(void)
{
    int a = 10;
    printf("The value of a before function call: %d\n", a);

    printf("The value addOne returns: %d\n", addOne(&a));

    printf("The value of a after function call: %d\n", a);
}