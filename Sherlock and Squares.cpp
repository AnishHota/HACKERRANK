#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t,i,j;
    cin>>t;
    while(t--)
    {
        int min,max;
        cin>>min>>max;
        int i=1,count=0;
        float square;
        square=pow(i,2);
        while(square<=max)
        {
            if(square>=min)
                {count++;}
            i++;
            square=pow(i,2);
        }
        cout<<count<<endl;
    }
	return 0;
}
