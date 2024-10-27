#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int h,w,n;
        cin>>h>>w>>n;
        long long int s, cnt=1;
        s = w*h;
        while(s%2==0){
            s = s/2;
            cnt*=2;
        }
        if(cnt>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
