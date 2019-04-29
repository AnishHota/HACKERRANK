#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long i,j,k,p,q,sq,le,ri,len,len1,len2;
  cin>>p>>q;
  bool soln = false;
  for(i=p;i<=q;i++)
  {
    string ans = "";
    string l = "";
    string r = "";
    sq = i*i;
    ans = to_string(sq);
    len = ans.length();
    len1 = int(len/2);
    for(j=0;j<len1;j++)
    {
      l += ans[j];
    }
    for(k=len1;k<len;k++)
    {
      r += ans[k];
    }
    ri = stoll(r,nullptr,10);
    if(l=="")
    {
      if(ri==i)
      {
        cout<<i<<" ";
        soln = true;
      }
    }
    else
    {
      le = stoll(l,nullptr,10);
      if(le+ri==i)
      {
        soln = true;
        cout<<i<<" ";
      }
    }
  }
  if(!soln)
  {
    cout<<"INVALID RANGE";
  }
  return 0;
}
