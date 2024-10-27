#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int s;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin>>s;
        v.push_back(s);
    }

    int x;
    cin>>x;
    int n1,n2;
    v.erase(v.begin()+x-1);

    cin>>n1>>n2;

    v.erase(v.begin()+n1-1,v.begin()+n2-1);
    cout<<v.size()<<endl;

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}

