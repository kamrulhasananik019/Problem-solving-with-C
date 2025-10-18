#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c,v;
 int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
      scanf("%d",&c);
       scanf("%d",&v);
      arr[c]=v;

    for(int i=n-1;i>=0;i--){
            printf("%d ", arr[i]);
        
        
    }
    
    
}