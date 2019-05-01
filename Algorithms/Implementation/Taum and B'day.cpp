#include<iostream>
using namespace std;
int main()
{
  long long t,b,w,bc,wc,z;
  cin>>t;
  while(t--)
  {
    long long cost=0;
    cin>>b>>w;
    cin>>bc>>wc>>z;
    if(bc+z<wc)
    {
      cost = bc*b + (bc+z)*w;
    }
    else if(wc+z<bc)
    {
      cost = (wc+z)*b + wc*w;
    }
    else
    {
      cost = bc*b + wc*w;
    }
    cout<<cost<<endl;
  }
}
