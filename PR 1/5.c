#include<stdio.h>
main()
{
    int s,w,e;
    
    for(int s=4;s>=1;s--)
    {
        for(int w=s;w<=4;w++)
        {
            printf(" ");
        }
        for(int e=s;e>=1;e--)
        {
            printf("* ");
        }
        printf("\n");
    }



    for(int s=2;s<=4;s++)
    {
        for(int w=4;w>=s;w--)
        {
            printf(" ");
        }
        for(int w=1;w<=s;w++)
        {
            printf("* ");
        }
        printf("\n");
    }
}