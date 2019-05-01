#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
  long long t,n,sum_r,temp,i,j;
  cin>>t;
  while(t--)
  {
    unordered_map<int,int> row_sum_freq;
    unordered_map<int,int> col_sum;
    unordered_map<int,int> col_sum_freq;
    cin>>n;
    for(i=0;i<n;i++)
    {
      sum_r = 0;
      for(j=0;j<n;j++)
      {
        cin>>temp;
        sum_r += temp;
        col_sum[j]+=temp;
      }
      row_sum_freq[sum_r]++;
    }
    for(auto x: col_sum)
    {
      col_sum_freq[x.second]++;
    }
    string ans = "Possible";
    if(row_sum_freq.size()==col_sum_freq.size())
    {
        for(auto x: row_sum_freq)
        {
          if(row_sum_freq[x.first]!=col_sum_freq[x.first])
            ans = "Impossible";
        }
    }
    else
    {
      ans = "Impossible";
    }
    cout<<ans<<endl;
  }
  return 0;
}
