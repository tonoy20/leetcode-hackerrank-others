#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rs,c=0,c1=0,m=0;
    cin>>rs;
    for(int i=1; i<=rs; i++){
        for(int sp=1; sp<=rs-i; sp++){
            cout<<"--";
            c++;
        }
        while(m!=2*i-1){
            if(c <= rs-1){
                cout<<i+m<<" ";
                c++;
            } else {
                ++c1;
                cout<<i+m - 2*c1<<" ";
            }
            m++;
        }
        c =c1 =m =0;
        cout<<endl;
    }
    return 0;
}
