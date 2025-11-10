#include<stdio.h>
void loop(int n,int i){
    if (i>n)
    {
       return;
    }
printf("%d\n",i);
  loop(n,i+1);
}

int main (){
    int n;
    scanf("%d",&n);
    loop(n,1);
    return 0;
}