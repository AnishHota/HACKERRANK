#include<iostream>
using namespace std;
int main()
{
  int i;
  string s;
  getline(cin,s);
  int ans = 0;
  int arr[26]={0};
  for(i=0;i<s.length();i++)
  {
    arr[tolower(s[i])-'a']++;
  }
  for(i=0;i<26;i++)
  {
    if(arr[i]==0)
      ans = 1;
  }
  if(ans==0)
    cout<<"pangram";
  else
    cout<<"not pangram";
  return 0;
}
