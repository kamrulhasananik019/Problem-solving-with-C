
#include<stdio.h>

int main(){
    int n,star,space,uspace;
    scanf("%d",&n);
    star=1;
    int ustar=1;
//    int t=1;
//    int ut=n-1;
   space=n-1;
   uspace=1;

    for (int  i = 0; i <n; i++)
    {
        for (int t = 1; t <=space; t++)
        {
            printf(" ");
        }
        
if (i%2!=0)
{
    for (int j = 1; j <=star; j++)
    {
        printf("-");
    }
    printf("\n");   
}else if (i%2==0)
{
    for (int p = 1; p <=star; p++)
    {
        printf("#");
    }
    printf("\n");
}

star+=2;
space--;
        
    };
    star-=4;
// printf("%d",star);
for (int  i = n; i >1; i--)
    {
        for (int t = 1; t <=uspace; t++)
        {
            printf(" ");
        }
        
if (i%2!=0)
{
    for (int j = star; j >=1; j--)
    {
        printf("-");
    }
    printf("\n");   
}else if (i%2==0)
{
    for (int p = star; p >=1; p--)
    {
        printf("#");
    }
    printf("\n");
}

star-=2;
uspace++;    
    };


    return 0;
}