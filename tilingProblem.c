/*
Given a “2 x n” board and tiles of size “2 x 1”,
count the number of ways to tile the given board using
the 2 x 1 tiles. A tile can either be placed horizontally
i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile. 
*/
#include<stdio.h>
int Tiling_way(int,int []);
int main()
{
    int n;
    scanf("%d",&n);
    int store[n+1];
    for(int i=0;i<=n;i++)
     store[i]=-1;
    printf("%d",Tiling_way(n,store));
    return 0;
}

int Tiling_way(int n,int store[])
{
    if((n==0)||(n==1))
      store[n]=1;
    else
      if(store[n]==-1)
         store[n]=Tiling_way(n-1,store)+Tiling_way(n-2,store);
    return store[n];
}
