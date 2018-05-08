#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n,i,l,size,arr[26]={0};
  string s;
  cin>>s;
  int a=0,b=0,counta=0,countb=0;
  for(i=0;i<s.length();i++)
  {
    l = int(s[i])%97;
    arr[l]++;
  }
  for(i=0;i<26;i++)
  {
    if(arr[i]!=0)
    {
      if(arr[i]==a)
        counta++;
      else if(arr[i]==b)
        countb++;
      else if(a==0)
        {a = arr[i];counta++;}
      else if(b==0)
        {b = arr[i];countb++;}
      else
      {
        cout<<"NO";
        return 0;
      }
    }
  }
  if(counta==0 || countb==0)
    cout<<"YES";
  else if(counta==1 || countb==1)
    {
      if(countb==1 && b==1)
        cout<<"YES";
      else if(counta==1 && a==1)
        cout<<"YES";
      else if(abs(a-b)==1)
        cout<<"YES";
      else
        cout<<"NO";
    }
  else
    cout<<"NO";
  return 0;
}
