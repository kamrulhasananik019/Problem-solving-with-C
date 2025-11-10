#include<stdio.h>

void forward(int i){
    if(i>10){
        return;
    }
 printf("%d\n",i);
    forward(i+1);
}


void revers(int i){
   
if (i==0)
{
    forward(i);
    return;
}

 printf("%d\n",i);
    revers(i-1);

}

int main(){
revers(10);
    return 0;
}