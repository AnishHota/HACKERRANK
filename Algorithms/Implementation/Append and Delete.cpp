//https://www.hackerrank.com/challenges/append-and-delete/problem
#include<iostream>
#include<string>
using namespace std;
string appendAndDelete(string s, string t, int k) {
  int size1  = s.length();
  int size2 = t.length();
  int i=0,j=0,ans=0;
  string str;
  while(i<size1 && j<size2)
  {
      if(s[i]!=t[j])
      {
          ans += size1-i;
          ans += size2-j;
          if(ans<=k)
              return "Yes" ;
          else
              return "No" ;
      }
      i++;
      j++;
  }
  if(ans==0)
  {
      if(size1+size2<k)
          str="Yes";
      else if(k%2==0 && abs(size2-size1)%2==0)
         str = "Yes";
      else if(k%2!=0 && abs(size2-size1)%2!=0)
         str = "Yes";
      else
         str = "No";
  }
  return str;
}
int main()
{
  string s="y";
  string t = "yu";
  string ans = appendAndDelete(s,t,2);
  cout<<ans;
}
