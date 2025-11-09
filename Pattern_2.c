#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int space=n-1;

    for (int i = 1; i <=n; i++)
    {
     for (int  t = 1; t<=space; t++)
    {
        printf(" ");
    }
    for (int  t = i; t>=1; t--)
    {
        printf("%d",t);
    }
    printf("\n");
    space--;
    }
    
   
    return 0;
}