#include<stdio.h>
#include<string.h>

int main(){

    int t;
    scanf("%d",&t);
while (t--)
{
    int a[3];
   for (int i = 0; i <3; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=a[0]+a[1];
    int mul=a[0]*a[2];
    float d=mul/sum;
    float result=a[2]-d;
     printf("%0.f\n",result);
}
 return 0;
}