#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  double fl,ce;
  fl = floor(sqrt(s.length()));
  ce = ceil(sqrt(s.length()));
  int i,j;
  if(fl==ce)
    fl--;
  for(i=0;i<=fl;i++)
  {
    string temp = "";
    for(j=i;j<s.length();j+=ce)
    {
      temp+=s[j];
    }
    cout<<temp<<" ";
  }
  return 0;
}
