#include<stdio.h>
int main()
{
    int k,l,m;
    scanf("%d%d%d",&k,&l,&m);
    int a[k][l][m];
    int i,j,p;
    for(i=0;i<=k;i++)
    {
        for(j=0;j<=l;j++)
        {
            for(p=0;p<=m;p++)
            {
                scanf("%d",&a[i][j][p]);
                int sum=0;
                sum=sum+a[i][j][p];
                printf("%d",sum);
            }
        }
    }
    return 0;
}