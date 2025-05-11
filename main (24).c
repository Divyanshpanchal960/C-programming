#include <stdio.h>
int main()
{
    int i=19;
    int j=29;
    int k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    printf("i=%d\n",i--);
    printf("i=%d\n",i++);
    printf("j=%d\n",--j);
    printf("j=%d\n",++j);
    printf("i=%d\n",--i);
    printf("j=%d\n",j--);
    printf("i=%d\n",++i);
    printf ("j%d\n",j++);
    printf ("k%d\n",k);
}
output=j=28
j=29
i=18
j=29
i=19
j=28
k=-20