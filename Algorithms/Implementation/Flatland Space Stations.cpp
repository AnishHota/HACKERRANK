#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int n,m,temp,i,ans=0;
  cin>>n>>m;
  vector<int> arr;
  for(i=0;i<m;i++)
  {
    cin>>temp;
    arr.push_back(temp);
  }
  sort(arr.begin(),arr.end());
  ans = max(arr[0],n-1-arr[m-1]);
  for(i=0;i<m-1;i++)
  {
    temp = (arr[i+1]-arr[i])/2;
    if(temp>ans)
      ans = temp;
  }
  cout<<ans<<endl;
}
