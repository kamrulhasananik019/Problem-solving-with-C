#include<stdio.h>
#include<string.h>

int main(){
int t;
   scanf("%d",&t);

while (t--){
   char a[10005];
    scanf("%s",a);
    int lenA=strlen(a);
    int num=0;
    int up=0;
    int low=0;

   for (int i = 0; i < lenA; i++)
    {
       if (a[i]>='0' && a[i]<='9')
       {;
        num+=1;
       }else if (a[i]>='A' && a[i]<='Z')
       {
        up+=1;
       }else if (a[i]>='a' && a[i]<='z')
       {
        low++;
       }    
    }   
         printf("%d %d %d \n",up,low,num); 
}
   return 0;
}


