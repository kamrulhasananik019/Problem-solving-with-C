#include<stdio.h>
#include <string.h> 

int main(){
    char a[100000];
    scanf("%s",a);
     int length=strlen(a);
     int sum=0;
    for (int i = 0; i<length; i++)
    {
        if (a[i]=='a')
        {
            continue;

        }else if (a[i]=='e')
        {
           continue;
        }else if (a[i]=='i')
        {
           continue;
        }else if (a[i]=='o')
        {
           continue;
        }else if (a[i]=='u')
        {
           continue;
        }
        {
         sum++;
        }
        
    }
    printf("%d",sum);
    return 0;
} 