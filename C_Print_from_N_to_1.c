#include<stdio.h>
void revers(int n){
    printf("%d",n);
if (n==1)
{
    return;
}
 printf(" ");
revers(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    revers(n);
    return 0;
}