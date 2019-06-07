#include<iostream>
using namespace std;
void lcs(int p[],int q[],int m,int n)
{
  int arr[m+1][n+1];
  int i,j;
  for(i=0;i<=m;i++)
  {
    for(j=0;j<=n;j++)
    {
      if(i==0 || j==0)
        arr[i][j]=0;
      else if(p[i-1]==q[j-1])
        arr[i][j] = 1+arr[i-1][j-1];
      else
        arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
    }
  }
  i=m;
  j=n;
  int ind=arr[m][n]-1;
  int soln[arr[m][n]]={0};
  while(i>0 && j>0)
  {
    if(p[i-1]==q[j-1])
    {
      soln[ind]=p[i-1];
      i--;j--;ind--;
    }
    else if(arr[i-1][j]>arr[i][j-1])
      i--;
    else
      j--;
  }
  for(i=0;i<arr[m][n];i++)
  {
    cout<<soln[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  int i,x,y;
  cin>>x>>y;
  int p[x],q[y];
  for(i=0;i<x;i++)
    cin>>p[i];
  for(i=0;i<y;i++)
    cin>>q[i];
  lcs(p,q,x,y);
  return 0;
}
