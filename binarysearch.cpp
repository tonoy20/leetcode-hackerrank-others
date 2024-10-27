#include<bits/stdc++.h>
using namespace std;

int binarySearch(int l, int h, int key, int ar[]) {
    while(l<=h){
        int mid = (l+h)/2;
        if(ar[mid]<key){
            l = mid+1;
        } else if(ar[mid]>key){
            h = mid-1;
        } else {
            return mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin>>ar[i];
    int q;
    cin>>q;
    int aq[q];
    for(int i=0; i<q; i++)
        cin>>aq[i];

    for(int i=0; i<q; i++){
        int ans = binarySearch(0,n,aq[i], ar );
        cout<<ans<<endl;
    }

    return 0;
}
