#include <stdio.h>
int main(){
    int f=0,s=1,n;
    int i;
    for (i=0;  i<=10; i++)
    {
        printf("%d\n",f);
        
        n=f+s;
        f=s;
        s=n;
    }
    
}