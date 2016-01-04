#include<iostream.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        long int n,x=-1,y=-1,i;
        cin >> n;
        int k=n;
        while(k%3!=0)
            {
            k-=5;
        }
        if(k<0)
            cout<<-1;
        else{for(i=0;i<k;i++)
            cout<<5;
        for(i=0;i<(n-k);i++)
            cout<<3;
        }
        cout<<endl;
    }
    return 0;
}
