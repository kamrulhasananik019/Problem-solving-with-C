#include<stdint.h>

#include<stdio.h>

void forward(int arr[],int n,int i){
    if(i==n){
        return;
    }
   forward(arr,n,i+1);
     printf("%d\n",arr[i]);
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    //  for (int i = 0; i < n; i++)
    // {
    //    printf("%d",arr[i]);
    // }
    
forward(arr,n,0);
    return 0;
}