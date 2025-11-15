#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int height = (n+1)/2 + 5;
    int star = 1;
    int space = height - 1;


    for(int i=0; i<height; i++){
        for(int s=0; s<space; s++){
            printf(" ");
        }
        for(int j=0; j<star; j++){
            printf("*");
        }
        printf("\n");

        star += 2;
        space--;
    }


    int divi = star - 2;
    int tp = (divi - n)/2;

    for(int i=0; i<5; i++){
        for(int s=0; s<tp; s++){
            printf(" ");
        }
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
