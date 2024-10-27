#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
    int ar[1000][1000];
    int s = 0;
    while(s < n){
        int k;
        cin>>k;
        for(int i=0; i<k; i++)
            cin>>ar[s][i];
        s++;
    }
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<ar[i][j]<<endl;
    }
    return 0;
}
