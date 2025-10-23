#include<stdio.h>
#include<string.h>

int main(){
    int a[3],b[3],c[3],d[3];
   for (int i = 0; i <3; i++)
    {
        scanf("%d",&a[i]);
    }


     for (int i = 0; i <3; i++)
    {
        scanf("%d",&b[i]);
    }


     for (int i = 0; i <3; i++)
    {
        scanf("%d",&c[i]);
    }


     for (int i = 0; i <3; i++)
    {
        scanf("%d",&d[i]);
    }
        int m1=a[2]*a[0]/a[2];
        int result1=a[2]-m1;

        int m2=b[2]*b[0]/b[2];
        int result2=m2-b[2];

        int m3=c[2]*c[0]/c[2];
        int result3=m3-c[2];

        int m4=d[2]*d[0]/d[2];
        int result4=d[2]-m4;

        printf("%d\n",result1);
        printf("%d\n",result2);
        printf("%d\n",result3);
        printf("%d\n",result4);

 return 0;
}