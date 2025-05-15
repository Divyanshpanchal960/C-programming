#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='s'||ch=='d'||ch=='f'||ch=='g'||ch=='h'||ch=='j'||ch=='k'||ch=='l'){
        
        printf("this is midline character");
        
    }
    else{
        printf("input not match");
        
    }
}