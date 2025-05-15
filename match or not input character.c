#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    
    if(ch=='b'){
        printf("ball\n");
        printf("input is matched\n");
        
    }
    else{
        printf("input is not matched\n");
        
    }
}