#include<iostream>
using namespace std;
int count(int arr[],int n)
{
  int i,j;
  int ans = 0;
  for(i=1;i<n;i++)
  {
    j=i;
    while(arr[j]<arr[j-1] && j>0)
    {
      swap(arr[j],arr[j-1]);
      j--;
      ans++;
    }
  }
  return ans;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
    int ans = count(arr,n);
    if(ans%2==0)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
}
