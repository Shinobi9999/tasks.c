#include <stdio.h>

void main()
{
   int a;

    do{
        printf("Please enter 0 or 1: ");
        scanf("%d", &a);

        switch(a)
        {
            case 0:
            case 1:
                printf("The entered number is %d \n", a);
                break;
            default:
                printf("Please enter either 0 or 1: \n");
                
        }
    }
    while(a != 0 && a != 1);
}
