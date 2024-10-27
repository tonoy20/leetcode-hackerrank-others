#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        int aq[n];
        int j=0;
        for(int i=k; i<n; i++)
        {
            aq[i] = ar[j];
            j++;
        }
        j=1;
        for(int i=k-1; i>=0; --i){
            aq[i] = ar[n-j];
            j++;
        }
        for(int i=0 ; i<n; i++){
            if(i == n-1){
                cout<<aq[i]<<endl;
            } else {
                cout<<aq[i]<<" ";
            }
        }


    }
    return 0;
}
