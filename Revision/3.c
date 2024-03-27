#include<stdio.h>
int main(){
    int a,b,c;
    for (int a=5; a>=1; a--)
    {
        for (int c=2; c<=a; c++)
        {
                printf(" ");
        }
        
        for (int b=a; b<=5; b++)
        {
            printf("%d",b);
        }

        for (int b=4; b>=a; b--)
        {
            printf("%d",b);
        }
        

        printf("\n");
        
    }
    
}