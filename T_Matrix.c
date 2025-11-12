#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int r,c;
    r=n;
    c=n;
int arr[r][c];
    for (int i = 0; i <r; i++)
    {
        for (int  j = 0; j <c; j++)
        {
           scanf("%d",&arr[i][j]);
        }
        
    }
    
    int sumR=0;
    int sumL=0;


    if (r==c)
    {
          for (int i = 0; i <r; i++)
    {
        for (int  j = 0; j <c; j++)
        {
        //    printf("%d ",arr[i][j]);
        if (i==j)
        {
            sumL+=arr[i][j];
        }



        if (i+j==r-1)
        {
            sumR+=arr[i][j];
        }
        }
    }  
    }
    int sum=sumR+sumL;
    printf("%d",sum);

    return 0;
}