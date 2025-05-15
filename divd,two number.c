#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    
    if(ch=='d'){
        int a=144,b=2,divd=a/b;
        printf("divd=%d",divd);
        
    }
    else{
        printf("input is not match");
        
    }
}