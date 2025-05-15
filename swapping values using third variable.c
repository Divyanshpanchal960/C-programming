#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    
    if(ch=='s')
    {
        int x,y,z;
        printf("enter the value of x and y");
        scanf ("%d %d",&x,&y);
        printf("before swapping\n");
        printf("%d %d\n",x,y);
        z=x;
        x=y;
        y=z;
        
        printf("after swapping\n");
        printf("%d %d",x,y);
    }
    else{
        printf("input is not match");
        
    }
}