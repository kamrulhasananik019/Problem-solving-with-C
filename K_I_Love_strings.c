#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[10000];
        char b[10000];
        fgets(a,sizeof(a),stdin);
        int length=strlen(a);
        for (int i = 0; i < length; i++)
        {
            if (a[i]!='\0')
            {
                b[i]=a[i];
            }
            
        }

        printf("%s",b);
        // for (int i = 0; i < length; i++)
        // {
        //     printf
        // }
        
        
    }
    
}