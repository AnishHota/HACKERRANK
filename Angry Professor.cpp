#include<iostream>
using namespace std;
int main()
{
    int testcase,i,j,n,k,p,flag,late,attime;
    cin>>testcase;
    for(i=0;i<testcase;i++)
    {
        int time_input=0;
        attime=0;
        flag=0;
        cin>>n>>k;
        for(j=0;j<n;j++)
        {
            if(attime>=k)
            {   flag=1;
            }
            cin>>time_input;
            if(time_input<=0)
                attime++;
            else
                late++;
        }
        if(flag==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
