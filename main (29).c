#include <stdio.h>
int main()
{
    int m=0;
    int n=0;
    int p= --m*--n*m++*n++;
    printf("p=%d",p);
}