#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int multi = a * b * c;
      long long  int x = 0;  
          
      if (multi==0)
      {
        if (m==0)
        {
            x==0;
        }else{
            x=-1;
        }
        
      }else{
        if (m%multi==0)
            {
                  x = m / multi;
            }else{
                x=-1;
            }

      }
      
            
            
            printf("%lld\n", x);
    }
}