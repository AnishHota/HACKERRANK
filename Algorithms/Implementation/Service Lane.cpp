#include<iostream>
using namespace std;
int main()
{
  int n,t,i;
  cin>>n>>t;
  int width[n];
  for(i=0;i<n;i++)
  {
    cin>>width[i];
  }
  while(t--)
  {
    int a,b,min;
    cin>>a>>b;
    min = width[a];
    for(i=a;i<=b;i++)
    {
      if(width[i]<min)
      {
        min = width[i];
      }
    }
    cout<<min<<endl;
  }
}
