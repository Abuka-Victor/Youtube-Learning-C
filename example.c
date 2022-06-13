#include <stdio.h>

void addOne(int *variable)
{
    (*variable) += 1;
    printf("Variable inside the addOne function: %d\n", (*variable));
}


int main(void)
{
    int a = 5;
    int b = 10;

    int *ptr = &a;

    int arr[] = {0, 1};
    int *ptra = arr;
    int *ptrb = &arr;
    printf("The address of my array using &: %p\n", &arr);

    printf("The address of my array using just the array name: %p\n", arr);

    if (ptra == ptrb)
        printf("They are equal\n");

    if (&ptr != ptr)
        printf("They are not equal\n");
    // printf("The value of a before addOne: %d\n", a);

    // addOne(&a);

    // printf("The value of a after addOne: %d\n", a);

}