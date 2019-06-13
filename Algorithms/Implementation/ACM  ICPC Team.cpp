#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n,m,i;
  string temp;
  cin>>n>>m;
  vector<string> arr;
  for(i=0;i<n;i++)
  {
    cin>>temp;
    arr.push_back(temp);
  }
  int count=0,j,max,k,cnt;
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      cnt=0;
      for(k=0;k<arr[j].length();k++)
      {
        if(arr[i][k]=='1' || arr[j][k]=='1')
            cnt++;
        if(cnt>max)
        {
          max = cnt;
          count = 0;
        }
        if(cnt == max)
        {
          count++;
        }
      }
    }
  }
  cout<<max<<endl;
  cout<<count<<endl;
  return 0;
}
