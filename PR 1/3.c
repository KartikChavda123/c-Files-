#include<stdio.h>
int main(){
    for (int i=5; i>=1; i--)
    {
        for (int space=5; space>=i; space--)
        {
            printf(" ");
        }
        
        for (int j=5; j>=1; j--)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
}