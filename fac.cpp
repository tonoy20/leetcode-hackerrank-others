#include<bits/stdc++.h>
using namespace std;

int fac(int n){
    if(n==0)
        return 1;
    else
        return n* fac(n-1);
}

int main()
{
    int n;
    cin>>n;
    int f = fac(n);
    cout<<f<<endl;

    return 0;
}
