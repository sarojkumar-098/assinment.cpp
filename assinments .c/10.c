#include<stdio.h>
int main()
{
int n,i,j;
printf("enter the no:");
scanf("%d",&n);
int arr[n+1];
for(i=2;i<n+1;i++){
    arr[i]=i;
}
i=2;
while((i*i)<=n){
    if( arr[i]!=0){
        for(j=2;j<=n/i;j++){
            if(arr[i*j]>n){
                break;
            }
            else{
                arr[i*j]=0;
            }
        }
    }
    i++;
}
for(int k=2;k<n+1;k++){
    if(arr[k]!=0){
        printf("%d ",arr[k]);
    }
}



    return 0;
}