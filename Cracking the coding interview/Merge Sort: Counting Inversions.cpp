#include<iostream>
#include<stdio.h>
using namespace std;
long merge(long arr[],long l,long m,long r)
{
  long temp[r-l+1];
  long i,j,k,inv_count=0;
  i=l;
  j=m+1;
  k=0;
  while(i<=m && j<=r)
  {
    if(arr[i] > arr[j])
    {
      temp[k] = arr[j];
      inv_count += m-i+1;
      j++;
    }
    else
    {
      temp[k] = arr[i];
      i++;
    }
    k++;
  }
  while(i<=m)
  {
    temp[k] = arr[i];
    i++;
    k++;
  }
  while(j<=r)
  {
    temp[k] = arr[j];
    j++;
    k++;
  }
  k=0;
  for(int x=l;x<=r;x++)
  {
    arr[x]=temp[k];
    k++;
  }
  return inv_count;
}
long mergesort(long arr[],long l, long r)
{
  long inv_count=0;
  if(l<r)
  {
    long m;
    m = (r+l)/2;
    inv_count += mergesort(arr,l,m);
    inv_count += mergesort(arr,m+1,r);
    inv_count += merge(arr,l,m,r);
  }
  return inv_count;
}
int main()
{
  long testcase;
  cin>>testcase;
  while(testcase--)
  {
    long n;
    cin>>n;
    long count = 0;
    long arr[n];
    for(long i=0;i<n;i++)
    {
      cin>>arr[i];
    }
    long arr_size = sizeof(arr)/sizeof(arr[0]);
    count = mergesort(arr,0,arr_size-1);
    cout<<count<<endl;
  }
  return 0;
}
