#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int h,w,i,j,temp,ans=0;
  cin>>h>>w;
  ans += 2*h*w;
  vector<int> arr[h+2];
  for(i=0;i<w+2;i++)
  {
    arr[0].push_back(0);
  }
  for(i=1;i<=h;i++)
  {
    arr[i].push_back(0);
    for(j=1;j<=w;j++)
    {
      cin>>temp;
      arr[i].push_back(temp);
    }
    arr[i].push_back(0);
  }
  for(i=0;i<w+2;i++)
  {
    arr[h+1].push_back(0);
  }
  for(i=1;i<=h;i++)
  {
    for(j=1;j<=w;j++)
    {
      ans += max(0,arr[i][j]-arr[i-1][j]);
      ans += max(0,arr[i][j]-arr[i][j-1]);
      ans += max(0,arr[i][j]-arr[i+1][j]);
      ans += max(0,arr[i][j]-arr[i][j+1]);
    }
  }
  cout<<ans<<endl;
  return 0;
}
