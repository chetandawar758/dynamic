/*
Given an array representing height of bar in bar graph, find max histogram
area in the bar graph. Max histogram will be max rectangular area in the graph.
*/
#include <stdio.h>
int Histogram_Area(int ,int []);
int main()
{
    int size;
    scanf("%d",&size);
    int row[size];
    for(int i=0;i<size;i++)
      scanf("%d",&row[i]);
    printf("%d",Histogram_Area(size,row));
    return 0;
}

int Histogram_Area(int size,int row[])
{
    int MaxArea=-1,area=0;
    int stack[size];
    int topIndex,top=0,i;
    for(i=0;i<size;)
    {
       if((top==0)||row[top-1]<=row[i])
       {
           stack[top]=i;
           top++;
           i++;
       }
       else
       {   
           topIndex=stack[top-1];
           top--;
           if(top==0)
              area=row[topIndex]*i;
           else
               area=row[topIndex]*(i-stack[top]-1);
           if(area>MaxArea)
              MaxArea=area;
       }
     printf(" area %d \n",MaxArea);
    }
    top--;
    while(top!=-1)
    {
       topIndex=stack[top];
       top--;
       area=row[topIndex]*(i-stack[top]-1);
       if(area>MaxArea)
         MaxArea=area;
         printf(" 2area %d \n",MaxArea);
    }
     
    return MaxArea;
}
