#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int res = (s[0] - '0') + (s[2] - '0');
        cout<<res<<endl;
    }
    return 0;
}
