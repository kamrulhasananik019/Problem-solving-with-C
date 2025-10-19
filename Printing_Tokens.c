#include<stdio.h>

int main(){

    char text[100];
    fgets(text, sizeof(text), stdin);
    printf("%s",text);
    
    
}