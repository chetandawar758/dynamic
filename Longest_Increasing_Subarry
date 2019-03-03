/*The Longest Increasing Subsequence (LIS) problem is to find the length
of the longest subsequence of a given sequence such that all elements
of the subsequence are sorted in increasing order. For example, the 
length of LIS for {10, 22, 9, 33, 21, 50, 41, 60, 80} is 6 
and LIS is {10, 22, 33, 50, 60, 80}.
*/
#include<stdio.h>
void Longest_increasing_subarry(int ,int arr[]);
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
      scanf("%d",&arr[i]);
    Longest_increasing_subarry(size,arr);
    return 0;
}
void Longest_increasing_subarry(int size,int arr[])
{
    int list[size];
    for(int i=0;i<size;i++)
      list[i]=1;
    for(int i=1;i<size;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
            {
                list[i]=list[i]>(list[j]+1)?list[i]:(list[j]+1);
            }
        }
    }
    printf("%d ",list[size-1]);
    return 0;
}
