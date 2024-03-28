#include<stdio.h>
int main()
{     
    int x,y,z;

    for(int x=1;x<=4;x++)
    {
        for(int y=4;y>=x;y--)
        {
            printf(" ");
        }
        for(int z=1;z<=x;z++)
        {
            printf("* ");
        }
        printf("\n");
    }


    for(int x=3;x>=1;x--)
    {
        for(int y=x;y<=4;y++)
        {
            printf(" ");
        }
        for(int z=x;z>=1;z--)
        {
            printf("* ");
        }
        printf("\n");
    }
}