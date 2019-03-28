/*
input is length of array A and B and both array.
 A = A,B,C,B,D,A,B
 B = B,D,C,A,B,A
 OutPut = B,C,B,A
*/
#include<stdio.h>
#include<string.h>
void Longest_comman_subsequence(char A[],char B[],int n,int m);
void Longest_comman(int n,int m,char Path[n+1][m+1],char A[],char B[],int Store[n+1][m+1]);
void PrintSol(int n,int m,char Path[n+1][m+1],char *A);
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char A[n],B[m];
    scanf("%s%s",A,B);
    Longest_comman_subsequence(A,B,n,m);
    return 0;
}

void Longest_comman_subsequence(char A[],char B[],int n,int m)
{
    char Path[n+1][m+1];
    int Store[n+1][m+1];
    
    for(int i=0;i<=n;i++)
     Store[i][0]=0;
    for(int j=0;j<=m;j++)
     Store[0][j]=0;
    
    Longest_comman(n,m,Path,A,B,Store);
   /* for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
          printf("%c ",Path[i][j]);
        printf("\n");
    } */
    PrintSol(n,m,Path,A);
    
    return ;
}
void Longest_comman(int n,int m,char Path[n+1][m+1],char A[],char B[],int Store[n+1][m+1])
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(A[i-1]==B[j-1])
            {
                Store[i][j]=Store[i-1][j-1]+1;
                Path[i][j]='D';
            }
            else if(Store[i-1][j]>=Store[i][j-1])
            {
                Store[i][j]=Store[i-1][j];
                Path[i][j]='U';
            }
            else
            {
                Store[i][j]=Store[i][j-1];
                Path[i][j]='L';
            }
        }
    }
    return;
}
void PrintSol(int n,int m,char Path[n+1][m+1],char *A)
{
    if((n<=0)||(m<=0))
       return ;
    if(Path[n][m]=='D')
    {
        PrintSol(n-1,m-1,Path,A);
        printf("%c ",A[n-1]);
    }
    else if(Path[n][m]=='L')
        PrintSol(n,m-1,Path,A);
    else 
        PrintSol(n-1,m,Path,A);
    
}
