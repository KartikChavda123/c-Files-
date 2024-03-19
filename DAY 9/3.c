#include <stdio.h>
int main(){
    int l;
    printf("Enter The numb er :");
    scanf("%d",&l);

    for (int i = 1; i<=10; i++)
    {
        printf("%d * %d = %d\n",l,i,l*i);
    }
    
}
