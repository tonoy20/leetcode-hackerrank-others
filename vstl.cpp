#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    vector<int>::iterator low,up;
    int q;
    cin>>q;

    while(q--)
    {
        int y;
        cin>>y;

        if (binary_search (v.begin(), v.end(), y))
        {
            low = lower_bound (v.begin(), v.end(), y);
            int s = (low- v.begin());
            cout<<"YES "<<s+1<<endl;
        }
        else
        {
            up=  upper_bound (v.begin(), v.end(), y);
            int m = (up - v.begin());
            cout<<"NO "<<m+1<<endl;
        }
    }

    return 0;
}
