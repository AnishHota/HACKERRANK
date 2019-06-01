#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  int num = arr[n-1];
  int pos = n-2;
  while(num<arr[pos] && pos>=0)
  {
    arr[pos+1] = arr[pos];
    pos--;
    for(auto x:arr)
      cout<<x<<" ";
    cout<<endl;
  }
  arr[pos+1] = num;
  for(auto x:arr)
    cout<<x<<" ";
  return 0;
}
