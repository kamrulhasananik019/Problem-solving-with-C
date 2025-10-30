#include<stdio.h>

int main (){
    int n;  
    scanf("%d",&n);
    int arr[n];
    int max=0;
    for (int i = 1; i <=n; i++)
    {
    scanf("%d",&arr[i]);
    }

     for (int i = 1; i <=n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    //  printf("%d ",max);

     for (int i = 1; i <=n; i++)
    {
        arr[i]=max - arr[i];
        printf("%d ",arr[i]);
    }
     
    return 0;
}