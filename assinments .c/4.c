#include<stdio.h>
int main()
{
    int a[3][3][2]={{{1,1,1},{2,2,2},{3,3,3}},{{1,1,1},{2,2,2},{3,3,3}}};
    int i,j,p;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            for(p=0;p<=2;p++)
            {
                scanf("%d",&a[3][3][2]);
                int sum=0;
                sum=sum+1;
                printf("%d",sum);
            }
        }
    }
    return 0;
}