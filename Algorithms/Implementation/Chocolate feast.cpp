#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,c,m,rem,ans=0;
    cin>>n>>c>>m;
    ans+= n/c;
    int wr = n/c;
    while(wr/m!=0)
    {
      ans += wr/m;
      rem = wr%m;
      wr = (wr/m) + rem;
    }
    cout<<ans<<endl;
  }
}
