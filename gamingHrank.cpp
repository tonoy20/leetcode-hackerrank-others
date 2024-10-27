#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int nums[n];
        for(int i=0; i<n; i++)
            nums[i] = i;
        for(int i=0; i<n; i++)
        {
            int temp, p = n-1, l = i;
            while(l<p/2){
                temp = nums[i];
                nums[i] = nums[p];
                nums[p] = temp;

                l++;
                p--;
            }
        }
        for(int i=0; i<n; i++)
            cout<<nums[i]<<" ";
    }
    return 0;
}
