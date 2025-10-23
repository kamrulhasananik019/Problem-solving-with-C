#include<stdio.h>
#include<string.h>

int main(){
    char a[100001];
    scanf("%s",a);
    int length=strlen(a);

    for (int i = 0; i < length; i++)
    {
        printf("%c",a[i]);
    }

    int f[10000]={0};
for (int i = 0; i < 10000; i++)
{
    f[a[i]]++;
}
printf("%d",f);

return 0; 
}