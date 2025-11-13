#include <stdio.h>

void rec (int n)
{if (n==0)
{
 return ;
}

    int last = n % 10;
    rec(n / 10);
     printf("%d " ,last);
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int  i = 0; i < n; i++)
    {
      int t;
      
      scanf("%d",&t);
      if (t==0)
      {
       printf("%d",t);
      }
      
    rec(t);
    printf("\n");
    }
    

    return 0;
}