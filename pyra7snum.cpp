#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rs;
    cin>>rs;
    for(int i =1; i<=rs; i++){
        for(int sp = rs; sp>i; sp--){
            cout<<" ";
        }
        for(int n = 1; n<=i; n++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
