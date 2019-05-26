#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,a,b,i,ma,mi;
    cin>>n>>a>>b;
    ma = max(a,b);
    mi = min(a,b);
    for(i = mi*(n-1);i<=(ma*(n-1));i+=(ma-mi))
    {
      cout<<i;
      if(ma-mi==0)
        break;
    }
    cout<<endl;
  }
  return 0;
}
