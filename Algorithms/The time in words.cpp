#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
  int h,m;
  cin>>h>>m;
  vector<string> numbers = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three",
        "twenty four",
        "twenty five",
        "twenty six",
        "twenty seven",
        "twenty eight",
        "twenty nine"
    };
  if(m==0)
  {
    cout<<numbers[h]<<" o' clock";
  }
  else if(m==15)
  {
    cout<<"quarter past "<<numbers[h];
  }
  else if(m==30)
  {
    cout<<"half past "<<numbers[h];
  }
  else if(m==45)
  {
    cout<<"quarter to "<<numbers[h+1];
  }
  else if(m==1)
  {
    cout<<"one minut past "<<numbers[h];
  }
  else if(m==59)
  {
    cout<<"one minute to "<<numbers[(h+1)%24];
  }
  else if(m>1 && m<30)
  {
    cout<<numbers[m]<<" minutes past "<<numbers[h];
  }
  else if(m>30 && m<59)
  {
    cout<<numbers[60-m]<<" minutes to "<<numbers[(h+1)%24];
  }
  return 0;
}
