#include<stdio.h>
int main(){
    int i=2,a;
    printf("Enter the value of a");
    scanf("%d",&a);
    do
    {
        printf("%d\n",i);
        i+=2;
    } while (i<=a);
    
}