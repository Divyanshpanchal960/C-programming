#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    
    if(ch=='m'){
        int a=12,b=12,mult=a*b;
        printf("mult=%d",mult);
        
    }
    else{
        printf("input is not match");
        
    }
}