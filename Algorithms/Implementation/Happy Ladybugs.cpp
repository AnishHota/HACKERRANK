#include<iostream>
using namespace std;
int main()
{
  int g;
  cin>>g;
  while(g--)
  {
    int n,i,us=0;
    cin>>n;
    string b;
    cin>>b;
    int hash[26]={0};
    for(i=0;i<b.length();i++)
    {
      if(b[i]=='_')
        us++;
      else
        hash[b[i]-'A']++;
    }
    int notHappy = 0;
    for(i=1;i<n-1;i++)
    {
      if(b[i]!=b[i+1] && b[i]!=b[i-1])
        notHappy++;
    }
    int ans = 1;
    //No underscores and not happy
    if(notHappy>0 && us==0)
    {
      ans = 0;
    }
    //Underscores exist but no same bugs
    for(i=0;i<26;i++)
    {
      if(hash[i]==1)
      {
        ans = 0;
      }
    }
    if(ans==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
