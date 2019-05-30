#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  vector<string> arr;
  string temp;
  for(i=0;i<n;i++)
  {
    cin>>temp;
    arr.push_back(temp);
  }
  for(i=1;i<n-1;i++)
  {
    for(j=1;j<n-1;j++)
    {
      if((arr[i][j]>arr[i+1][j])&&(arr[i][j]>arr[i][j+1]))
        if((arr[i][j]>arr[i-1][j])&&(arr[i][j]>arr[i][j-1]))
          arr[i][j]='X';
    }
  }
  for(auto s:arr)
  {
    cout<<s<<endl;
  }
  return 0;
}
