#include<stdio.h>
#define MAX 1000;
int Egg_Drop(int ,int);
int max(int ,int);
int main()
{
    int nofloors,noEgg;
    scanf("%d%d",&nofloors,&noEgg);
    printf("Minimum number of trials in worst case :  = %d",Egg_Drop(nofloors,noEgg));
    return 0;
}

int max(int a,int b)
{
    return a>b?a:b;
}

int Egg_Drop(int noSteps,int noEgg)
{
    int store[noSteps+1][noEgg+1];
    for(int e=0;e<=noEgg;e++)
    {
       store[0][e]=0;
       store[1][e]=1;
    }
    for(int s=2;s<=noSteps;s++)
    {
       store[s][1]=s;
       store[s][0]=0;
    }
    for(int s=2;s<=noSteps;s++)
    {
        for(int e=2;e<=noEgg;e++)
        {
             store[s][e]=MAX;
            for(int x=1;x<=s;x++)
            {
                int temp=1+max(store[s-x][e],store[x-1][e-1]);
                if(store[s][e]>temp)
                 store[s][e]=temp;
            }
        }
    }
    return store[noSteps][noEgg];
}
