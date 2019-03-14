/*
given two strings str1 and str2 and below operations that can be performed
on str1. Find the minimum number of edits (operations)
required to convert ‘str1’ into ‘str2’.
Insert,Remove ,Replace ( this three operation you can do .)
using memoization.
*/

// You have to convert str1 int str12.
#include<stdio.h>
#include<string.h>
#define M 100;
int min(int ,int ,int);
int Edit_Distance(char str1[],char str2[],int i,int j);
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s %s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("No of Operation : %d",Edit_Distance(str1,str2,len1-1,len2-1));
    return 0;
}
int Edit_Distance(char str1[],char str2[],int i,int j)
{
    if((i<0)&&(j<0))
        return 0;
    else if((i<0)||(j<0))
         return i<j?j+1:i+1;
    else if(str1[i]==str2[j])
        return Edit_Distance(str1,str2,i-1,j-1);
    else
       return 1+min(Edit_Distance(str1,str2,i,j-1),Edit_Distance(str1,str2,i-1,j),Edit_Distance(str1,str2,i-1,j-1));
}
int min(int a,int b,int c)
{
    int temp1=(a<b?a:b);
    return temp1<c?temp1:c;
}
