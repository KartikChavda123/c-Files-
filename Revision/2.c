#include<stdio.h>
int main(){
    int c, d, e=1;

    printf("Enter the valiue of number :");
    scanf("%d",&c);

    if(c<0){
        printf("Enter the valid number...");
    }

    else{
        for(int d=1; d<= c; ++d){

            e*=d;
        }

        printf("Factorial of %d=%d",c,e);
    }
}