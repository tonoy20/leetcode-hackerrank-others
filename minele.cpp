#include<bits/stdc++.h>
using namespace std;

int min_ele(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    return min(arr[n-1], min_ele(arr, n-1));
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimun element: "<<min_ele(arr,n)<<endl;
    return 0;
}
