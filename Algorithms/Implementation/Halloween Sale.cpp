#include<iostream>
using namespace std;
int main()
{
  int p,d,m,s;
  cin>>p>>d>>m>>s;
  int ans = 0;
  while(s>p)
  {
    s-=p;
    p-=d;
    ans++;
    if(p<m)
      p=m;
  }
  cout<<ans;
  return 0;
}
