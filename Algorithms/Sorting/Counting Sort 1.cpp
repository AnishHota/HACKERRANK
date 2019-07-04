#include<iostream>
using namespace std;
int main()
{
  long long t,temp;
  cin>>t;
  long long arr[100] = {0};
  for(long long i=0;i<t;i++)
  {
    cin>>temp;
    arr[temp]++;
  }
  for(auto x:arr)
    cout<<x<<" ";
  return 0;
}
