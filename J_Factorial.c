#include <stdio.h>
long long int  fac(int  n)
{
   if (n==1)
   {
    return 1;
   }
  long long int  multi= fac(n-1);
  return n*multi;
}

long long int  main()
{
 int  n;
    scanf("%d", &n);
    long long int  s = fac(n);
    printf("%lld", s);
    return 0;
}