#include<stdio.h>
#include<string.h>

int main(){
    char a[101],b[101];

    scanf("%s %s",a,b);
    int lenA=strlen(a);
    int lenB=strlen(b);
    for(int i=0;i<=lenB;i++){
        a[i+lenA]=b[i];
    }

    // easy way to do that strcat(a,b)
    
    printf("%s %s",a, b);
}