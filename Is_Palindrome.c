#include<stdio.h>
#include<string.h>


int is_palindrome(char a[],int n){
    char b[1000];
int x=0;
    for (int i = 0; i <n; i++)
{
        b[i]=a[n-i-1]; 
}

    
int flag=0;

for (int i = 0; i < n; i++)
{
    if (a[i]==b[i])
    {
        flag++;
    //   printf("%c",b[i]);
    }
    
    //  printf("%c",b[i]);
}
;
if (flag==n)
{
    x=1;
}


return x;
}


int main(){
    char a[1000];
    scanf("%s",a);
    int n=strlen(a);
 

int x =is_palindrome(a,n);
//    printf("%d",x);
if (x==1)
{
   printf("Palindrome");
}else if (x==0)
{
     printf("Not Palindrome");
}


//  char b= is_palindrome(a,n);

//   printf("%c",b);
    return 0;
}