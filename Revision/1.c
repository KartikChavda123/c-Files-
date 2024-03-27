#include <stdio.h>
main() {
    int a,b = 1 ; 

    printf("Enter Value of Number :");
    scanf("%d",&a);

    if (a == 0 || a == 1)
    {
        b = 0;
    }

    for (int i = 2; i <= a / 2; ++i)
    {
        if (a % i == 0)
        {
            b = 0;
            break;
        }
    }

    if (b) {
        printf("\n%d is a prime number.\n", a);
    } else {
        printf("\n%d is not a prime number.\n", a);
    }

}