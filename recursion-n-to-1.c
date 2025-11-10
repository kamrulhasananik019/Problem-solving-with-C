#include<stdint.h>

#include<stdio.h>

void forward(int i){
    if(i==10){
        return;
    }
    forward(i+1);
     printf("%d\n",i);
}


int main(){
forward(1);
    return 0;
}