#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
      arr[i] = i+1;
    }
    if(k==0)
    {
      for(auto x:arr)
        cout<<x<<" ";
      cout<<endl;
    }
    else if((k>n || n%2!=0) || (n%(2*k))!=0)
    {
      cout<<-1<<endl;
    }
    else
    {
      int count = 0;
      while(count<n)
      {
        for(i=count+k;i<count+2*k;i++)
        {
          cout<<arr[i]<<" ";
        }
        for(i=count;i<count+k;i++)
        {
          cout<<arr[i]<<" ";
        }
        count+=2*k;
      }
      cout<<endl;
    }
  }
  return 0;
}
