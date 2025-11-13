#include<stdio.h>
#include<string.h>

int CountVowels(char s[], int i){
    int v=0;
        if (s[i]=='\0')
        {
            return 0;
        }else if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
         s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            v++;
         }

        
    
 return v+CountVowels(s,i+1);;
}

int main(){
    char s[201];
    fgets(s,sizeof(s),stdin);
int n=CountVowels(s,0);
printf("%d",n);
return 0;
}