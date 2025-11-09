#include<stdio.h>

int main(){
    int n,star,space;
    scanf("%d",&n);
    space=n-1;
    star=1;
    for (int  i = 0; i <n; i++)
    {
        for (int i = 1; i <=space; i++)
        {
           printf(" ");
        }
        for (int i = 1; i <=star; i++)
        {
           printf("*");
        }
        printf("\n");
        star+=2;
        space--;

    }
    return 0;
}