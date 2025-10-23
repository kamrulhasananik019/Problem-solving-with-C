#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    int fr[n];
for (int i = 0; i < n; i++)
    {
        fr[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        fr[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
      printf("%d : %d\n",i,fr[i]);
    }
    

 return 0;
}