#include<iostream>
#include<unordered_map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while(q--)
  {
    string a,temp;
    cin>>a;
    int i,j;
    unordered_map<string,int> map;
    for(i=0;i<a.length();i++)
    {
      for(j=1;j<=a.length()-i;j++)
      {
        string b = a.substr(i,j);
        sort(b.begin(),b.end());
        map[b]++;
      }
    }
    int count = 0;
    for(auto x: map)
    {
      if(x.second>1)
      {
        count += ((x.second)*(x.second-1))/2;
      }
    }
    cout<<count<<endl;
  }
  return 0;
}
