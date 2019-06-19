#include<iostream>
using namespace std;
int main()
{
  int n,i;
  cin>>n;
  string s;
  cin>>s;
  int k;
  cin>>k;
  k = k%26;
  string ans;
  for(i=0;i<n;i++)
  {
    if(s[i]>='a' && s[i]<='z')
    {
      s[i] -= 97;
      s[i] += k;
      s[i] = s[i]%26;
      s[i] += 97;
    }
    if(s[i]>='A' && s[i]<='Z')
    {
      s[i] -= 65;
      s[i] += k;
      s[i] = s[i]%26;
      s[i] += 65;
    }
  }
  cout<<s<<endl;
  return 0;
}
