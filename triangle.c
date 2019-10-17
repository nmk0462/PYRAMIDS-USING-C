#include<stdio.h>
int main()
{

    int r,c=1,s,i,j;
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        for(s=1;s<=r-1;s++)
        for(j=0;j<=i;j++)
        {

            if(j==0 || i==0)
            {
                c=1;
            }
            else
                c=c*(i-j+1)/j;
            printf("%4d",c);

        }
    }
    return 0;
}
