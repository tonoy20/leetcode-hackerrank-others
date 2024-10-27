#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int c,r;
    cin>>r>>c;
    int ar[] = {0,2,4,6,8};
    int a = (r-1)/2;
   // cout<<a<<endl;
    int p;
    if(a){
        p = ar[c-1] + a*10;
    }
    if((r-1)%2 == 1){
        p = p + 1;
    }
    cout<<p<<endl;
    return 0;
}

