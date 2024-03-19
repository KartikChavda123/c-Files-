#include <stdio.h>
int main(){
    int k,sum=0;
    printf("ENter the number of n:");
    scanf("%d",&k);

    for ( int i=0; i<=k; i++)
    {
        sum += i;
    } printf("%d\n",sum);
}
