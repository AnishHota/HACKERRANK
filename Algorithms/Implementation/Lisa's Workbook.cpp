#include<iostream>
using namespace std;
int main()
{
  int n,k,i;
  cin>>n>>k;
  int arr[n];
  for(i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int m,page=1,count=0;
  for(auto a:arr)
  {
    m=1;
    while(m<=a)
    {
      if(m==page)
        count++;
      if(m%k==0)
        page++;
      m++;
    }
    if(a%k!=0)
      page++;
  }
  cout<<count<<" "<<page;
}
