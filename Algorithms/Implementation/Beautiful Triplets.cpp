#include<iostream>
#include<vector>
using namespace std;
int main()
{
  long long n,d,i,j,k,temp,count=0;
  vector<int> arr;
  cin>>n>>d;
  for(i=0;i<n;i++)
  {
    cin>>temp;
    arr.push_back(temp);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(arr[j]-arr[i]>d)
        break;
      for(k=j+1;k<n;k++)
      {
        if(arr[k]-arr[j]>d)
          break;
        if(arr[k]-arr[j]==d && arr[j]-arr[i]==d)
          count++;
      }
    }
  }
  cout<<count;
  return 0;
}
