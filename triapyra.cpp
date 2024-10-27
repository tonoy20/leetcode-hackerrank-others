#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,c=0,c1=0,m=0;
    cin>>s;
    for(int i=1; i<=s; i++){
        for(int j=1; j<=s-i; j++){
            cout<<"  ";
            ++c;
        }
        while(m != 2*i-1){
            if(c <= s-1){
                cout<<i+m<<" ";
                ++c;
            } else {
                ++c1;
                cout<<i+m - 2*c1<<" ";
            }
            ++m;
        }
        c1 =c =m =0;
        cout<<endl;
    }
    return 0;
}
