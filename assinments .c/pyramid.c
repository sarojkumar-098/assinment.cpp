#include<stdio.h>
int main()
{
    int i,j,k,l,p;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        for(j=1;j<=34;j++)
        printf(" ");
        for(k=i;k<=4;k++)
        printf(" ");
        for(l=1;l<=(2*i-1);l++)
        printf("*");
        
        printf("\n");
    }
    return 0;
}
