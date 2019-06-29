#include<iostream>
using namespace std;
int main()
{
  long t;
  cin>>t;
  long rem = 3;
  while(t>rem)
  {
    t = t-rem;
    rem *= 2;
  }
  cout<<(rem-t+1);
  return 0;
}
