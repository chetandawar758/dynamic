#include<stdio.h>
int No_way(int [],int ,int);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
    int score;
    scanf("%d",&score);
    printf("%d",No_way(arr,n,score));
     return 0;
}
int No_way(int arr[],int n,int score)
{
    int store[score+1];
    for(int i=0;i<=score;i++)
      store[i]=0;
    store[0]=1;
    for(int i=0;i<n;i++)
        for(int j=arr[i];j<=score;j++)
            store[j]=store[j]+store[j-arr[i]];
    return store[score];
}