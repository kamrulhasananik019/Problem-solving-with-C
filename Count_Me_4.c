#include<stdio.h>
#include<string.h>

int main(){
    char a[10000];
    scanf("%s",a);
    int length=strlen(a);


// int f[length];
// for (int i = 0; i < length; i++)
// {
//     f[i]=0;
// }

int f[26]={0};
for (int i = 0; i < length; i++)
{
    if (a[i]>='a' && a[i]<='z' )
    {
         int su=a[i]-'a';

    f[su]++; 
    }  
 
}

for (int i = 0; i <26; i++)
{
    if (f[i]>0)
    {
        printf("%c - %d\n",i+'a',f[i]);
    }   
}


return 0; 
}