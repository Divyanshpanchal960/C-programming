#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    
    if(ch=='s') 
    {
        int x,y;
        printf("enter the value of x and y");
        scanf("%d %d",&x,&y);
        printf("before swapping\n");
        printf("%d %d\n",x,y);
        x=x+y;
        y=x-y;
        x=x-y;
        printf("after swapping\n");
        printf("%d %d",x,y);
        
    }
    else{
        printf("input not match");
    }
}