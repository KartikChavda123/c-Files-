#include <stdio.h>
int main(){
    int a,b;

    printf("Enter The Value Of a=");
    scanf("%d",&a);

    printf("Enter The Value Of b=");
    scanf("%d",&b);

    if (a > b)
    {
        printf("A is big %d",a);
    }
    else{
        printf("B is big %d",b);
    }
}