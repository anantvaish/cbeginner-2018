#include <stdio.h>

int main()
{
    int i,j,sp;
    int n=7;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        for(sp=n-i;sp>0;sp--)
        {
            printf(" ");
            sp--;
        }
        printf("\n");
    }

    return 0;
}
