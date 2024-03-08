#include<stdio.h>
    int main(){
    int a;
    printf("enter any input :");
    scanf("%d",&a);
    
    if(a <= 0)
    {
        printf("This number is Negative");
    }
     else if(a >= 0)
    {
        printf("This number is Positive");
    }
    else{
        printf("This number is Nautral");
    }
}