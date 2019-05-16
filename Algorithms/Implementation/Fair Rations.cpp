#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int sum = 0,count=0;
  for(i=0;i<n;i++)
  {
    sum+=arr[i];
    if(sum%2!=0)
      count+=2;
  }
  if(sum%2==0)
    cout<<count;
  else
    cout<<"NO";
  return 0;
}
