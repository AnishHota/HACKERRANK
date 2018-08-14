// FACTORIAL OF A LARGE NUMBER
#include<iostream>
using namespace std;
void factorial(int n)
{
  int arr[500]={},k=1,size=1,carry=0,i;
  arr[0]=1;
  while(k<=n)
  {
    for(int j=0;j<size;j++)
    {
      arr[j] = arr[j]*k+carry;
      carry = arr[j]/10;
      arr[j]=arr[j]%10;
    }
    while(carry)
    {
      arr[size] = carry%10;
      carry = carry/10;
      size++;
    }
    k++;
  }
  for(int j=size-1;j>=0;j--)
  {
    cout<<arr[j];
  }
  cout<<endl;
}
int main()
{
  int n=7;
  factorial(n);
  return 0;
}
