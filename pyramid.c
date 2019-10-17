#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,sp,n0;
    scanf("%d",&n0);
    n=n0;
    for(i=0;i<=n0;i++)
    {
        for(sp=0;sp<=(n0-i);sp++)

        {
            printf(" ");
        }
        n=1;
            for(j=0;j<=i;j++)
            {
                printf(" %d",n);
                n=n*(i-j)/(j+1);
            }
printf("\n");

    }
    return 0;
}
