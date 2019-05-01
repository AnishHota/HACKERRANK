#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int n,temp,i;
  cin>>n;
  vector<int> arr;
  for(i=0;i<n;i++)
  {
    cin>>temp;
    arr.push_back(temp);
  }
  sort(arr.begin(),arr.end());
  reverse(arr.begin(),arr.end());
  while(!arr.empty())
  {
    cout<<arr.size()<<endl;
    for(i=0;i<arr.size();i++)
    {
      arr[i] -= arr[arr.size()-1];
    }
    while(arr.back()==0 && !arr.empty())
    {
      arr.pop_back();
    }
  }
}
