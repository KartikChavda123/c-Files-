#include<stdio.h>
int main(){
    int a,b,c;
    for (int a=1; a<=5; a++)
    {
        for (int b=2; b<=a; b++)
        {
            printf(" ");
        }
        
        for (int c=a; c<=5; c++)
        {
            printf(" *");
        }

        printf("\n");
        
    }
}