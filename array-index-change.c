#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int arr[n+1];
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
int inx,val;
scanf("%d %d",&inx,&val);
for (int  i = n; i >=inx+1; i--)
{
    arr[i]=arr[i-1];
}
arr[inx]=val;
for (int i = n; i <= n; i++)
{
    printf("%d",arr[i]);
}

}