#include <stdio.h>
#include <stdbool.h>

int main()
{
  int r, c;
  scanf("%d %d", &r, &c);
  int arr[r][c];

  for (int i = 0; i < r; i++)
  {

    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  bool flag = true;

if (r==c)
{
  for (int  i = 0; i < r; i++)
  {
    for (int  j = 0; j < c; j++)
    {
     if (i!=j)
     {
      if (arr[i][j]!=0)
      {
        flag=false;
      }
      }
     
    }
    
  }
  
  if (flag==true)
  {
    printf("this is primary");
  }else{
     printf("this is not primary");
  }
  

}else{
  printf("Not square");
}

 
}