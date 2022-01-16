#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a;
    int b;

    printf("Please enter value of a: ");
    scanf("%d", &a);

    printf("Please enter value of b: ");
    scanf("%d", &b);

    printf("Initial values a=%d, b=%d\n", a,b);

    a = a+b; // sum a,b and store the result in a
    b = a-b; // subtract b from the new value of a and assign it to b
    a = a-b; // subtract new value of b from the value of a and assign it to a

    printf("Values after swapping a=%d, b=%d\n", a,b);
}
