#include <stdio.h>

int main(void)
{
    int a = 15;
    int b = 51;

    printf("The value of a before dereferencing: %d\n", a);

    int *ptr = NULL;
    printf("The address of variable a is: %p\n", ptr);

    *ptr = 20;
    printf("The value of a after dereferencing: %d\n", a);

    ptr = &b;
    printf("Pointer is now pointing to: %d\n", *ptr);

    char str[] = "Lolide";
    printf("Before: %s\n", str);
    str[3] = 'a';
    printf("After: %s\n", str);

}