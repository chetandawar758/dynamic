/*
given two strings str1 and str2 and below operations that can be performed
on str1. Find the minimum number of edits (operations)
required to convert ‘str1’ into ‘str2’.
Insert,Remove ,Replace ( this three operation you can do .)
*/
// useing tabulation.
#include<stdio.h>
#include<string.h>
int min(int ,int ,int);
void Edit_Distance(int lena,int lenb,char str1[],char str2[]);
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    Edit_Distance(len1,len2,str1,str2);
   
    return 0;
}
void Edit_Distance(int lena,int lenb,char str1[],char str2[])
{
    int Store[lena+1][lenb+1];
    for(int i=0;i<lenb+1;i++)
      Store[0][i]=i;
    for(int i=0;i<lena+1;i++)
      Store[i][0]=i;
    
    for(int i=1;i<lena+1;i++)
    {
        for(int j=1;j<lenb+1;j++)
        {
            if(str1[i-1]==str2[j-1])
                Store[i][j]=Store[i-1][j-1];
            else
                Store[i][j]=1+min(Store[i-1][j],Store[i][j-1],Store[i-1][j-1]);
        }
    }
    
    printf("No. of operation : %d",Store[lena][lenb]);
}
int min(int a,int b,int c)
{
    int temp1=(a<b?a:b);
    return temp1<c?temp1:c;
}
