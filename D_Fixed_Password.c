#include <stdio.h>
int main() 
{
    int n ; 
    int max=0;
      scanf("%d",&n);
    for (int i =1; i<=n; i++){
      int x;
        scanf("%d",&x);
        if(x>=max){
          max=x;
        };
    }
    
printf("%d\n",max);
  
   
     return 0;
}


