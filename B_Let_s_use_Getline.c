#include<stdio.h>
#include <string.h> 

int main(){
    char a[100000];
    fgets(a,sizeof(a),stdin);
    for (int i = 0; a[i]!='\\'; i++)
    {
       printf("%c",a[i]);
    }
    
} 