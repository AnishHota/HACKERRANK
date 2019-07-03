#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int flag=0;
    string s;
    cin>>s;
    long long x,i;
    for(i=1;i<=s.length()/2;i++)
    {
      string first,test;
      first = s.substr(0,i);
      x = stoll(first,0,0);
      test += first;
      while(test.length()<s.length())
      {
        test += to_string(++x);
      }
      if(test == s)
      {
        cout<<"YES "<<first<<endl;
        flag = 1;
        break;
      }
    }
    if(flag!=1)
      cout<<"NO"<<endl;
  }
  return 0;
}
