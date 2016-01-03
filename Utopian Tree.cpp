#include<iostream.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a = 0; a < t; a++){
        int n;
        cin >> n;
        int h=1,i=1;
        while(i<=n)
            {
                if(i%2==0)
                    h+=1;
                else
                    h*=2;
                i++;
            }
        cout<<h<<"\n";
    }
    return 0;
}
