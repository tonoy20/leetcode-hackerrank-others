#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int mx=0,rs;
    for(int i=1; i<=n;i++){
        int s;
        if(n%i == 0){
            s=i;
            int r,r1=0;
            while(s) {
                r = s%10;
                s = s/10;
                r1 = r1 + r;
            }
            if(r1>mx) {
                mx = r1;
                rs = i;
            }
        }
    }
    cout<<rs<<endl;

    return 0;
}
