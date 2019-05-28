#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,i,j;
  cin>>n;
  int arr[n];
  for(i=0;i<n;i++)
    cin>>arr[i];
  int ans = 1;
  //if already sorted
  for(i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
      ans = 0;
  }
  if(ans==1)
  {
    cout<<"yes";
    return 0;
  }
  //If not sorted
  int start=-1,end=-1;
  for(i=0,j=n-1;j>=0 && i<n;i++,j--)
  {
    if(arr[i]>arr[i+1] && start==-1)
      start = i;
    if(arr[j]<arr[j-1] && end==-1)
      end = j;
  }
  //Swapping start and end
  ans = 1;
  swap(arr[start],arr[end]);
  for(i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
      ans = 0;
  }
  if(ans==1)
  {
    cout<<"yes"<<endl;
    cout<<"swap "<<start<<" "<<end;
    return 0;
  }
  //Reverse
  ans = 1;
  reverse(arr+start+1,arr+end);
  for(i=0;i<n-1;i++)
  {
    if(arr[i]>arr[i+1])
      ans = 0;
  }
  if(ans==1)
  {
    cout<<"yes"<<endl;
    cout<<"reverse "<<start<<" "<<end;
    return 0;
  }
  else
  {
    cout<<"no";
  }
  return 0;
}
