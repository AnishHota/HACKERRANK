#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  long long arr[n];
  long long i,temp;
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);
  long long mind = INT_MAX;
  for(i=1;i<n;i++)
  {
    if(abs(arr[i]-arr[i-1])<mind)
      mind = abs(arr[i]-arr[i-1]);
  }
  for(i=1;i<n;i++)
  {
    if(abs(arr[i]-arr[i-1])==mind)
      cout<<arr[i-1]<<" "<<arr[i]<<" ";
  }
  return 0;
}
