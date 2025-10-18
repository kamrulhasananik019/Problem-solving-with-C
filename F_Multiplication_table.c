#include<stdio.h>
int main(){
    int n;
    int s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      int s;
      scanf("%d",&s);
      while (n!=0)
      {
        printf("%d",n%10);
        n/=10;
      }
      

    }
}