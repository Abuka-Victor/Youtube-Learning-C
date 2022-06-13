#include <stdio.h>

void print_str(char str[])
{
    printf("%s\n", );
    printf("Size of str in function: %lu\n", sizeof(str));
}

int main(void)
{
    char str[] = "Loladekjknjsdwlhewdnfklwdnsfkjv";
    printf("Size of str outside of function: %lu\n", sizeof(str));
    print_str(str);
}