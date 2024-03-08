#include <stdio.h>
int main(){
    int a;

    printf("Enter Your Age =");
    scanf("%d",&a);

    if (a >= 18)
    {
        printf("You Can Apply Vote");
    }

    else{
        printf("You Can Not Apply Vote");
    }
    
}