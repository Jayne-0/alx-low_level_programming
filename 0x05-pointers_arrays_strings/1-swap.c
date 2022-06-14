#include "main.h"
#include <stdio.h>

/**
* swap_int() - swap the values of two integers.
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
int main(){
int a = 5, b = 8;
printf("Before swapping\t a = %d; b = %d", a, b);
swap(a, b);
printf("\nAfter swapping\t a = %d; b = %d", a, b);
return 0;
}
