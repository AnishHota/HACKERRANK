#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int n,i,ans=0;
  string s;
  cin>>n;
  cin>>s;
  int count[4]={0,0,0,0};
  if(n<3)
  {
    cout<<(6-n);
  }
  else
  {
    for(i=0;i<n;i++)
    {
      if(s[i]>='a' && s[i]<='z')
        count[0]=1;
      else if(s[i]>='A' && s[i]<='Z')
        count[1]=1;
      else if(s[i]>='0' && s[i]<='9')
        count[2]=1;
      else
        count[3]=1;
    }
    for(i=0;i<4;i++)
    {
      if(count[i]!=1)
        ans++;
    }
    cout<<max(ans,6-n);
  }
  return 0;
}
