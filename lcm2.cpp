#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,m;
    cin>>n1>>n2;
    m = (n1>n2) ? n1 : n2;
    do {
        if(m %n1 ==0 && m % n2 ==0 ){
            cout<<"LCM "<<m<<endl; break; }
        else {
            ++m;
        }
    } while(true);

    return 0;
}
