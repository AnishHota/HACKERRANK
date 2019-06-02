#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  for(i=1;i<n;i++)
  {
    int j=i;
    int temp = arr[j];
    while(temp<arr[j-1] && j>0)
    {
      arr[j] = arr[j-1];
      j--;
    }
    arr[j] = temp;
    for(auto x:arr)
      cout<<x<<" ";
    cout<<endl;
  }
}
