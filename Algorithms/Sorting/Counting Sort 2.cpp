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
  long long i,j;
  for(i=0;i<100;i++)
  {
    for(j=0;j<arr[i];j++)
    {
      cout<<i<<" ";
    }
  }
  return 0;
}
