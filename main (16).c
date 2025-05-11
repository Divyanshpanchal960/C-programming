#include <stdio.h>
int main()
{
    int i=19;
    int j=29;
    int k;
    k=i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    printf("i=%d\n",i);
    printf("j=%d\n",j);
    printf("k=%d\n",k);
    
}