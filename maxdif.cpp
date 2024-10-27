#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int ar[n];
        for(int i=0; i<n; i++){
            cin>>ar[i];
        }
        sort(ar, ar+n);
        int r1 = ar[0]+ar[1];
        int r2 = ar[n-1]+ar[n-2];
        int ans = ar[n-1]-ar[0];
        if(n>2){
            ans = r2-r1;
        }
        cout<<ans<<endl;
    }
    return 0;
}
