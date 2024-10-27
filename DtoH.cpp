#include<bits/stdc++.h>
using namespace std;

string hexaconvert(int num)
{
    string hexa;
    while(num)
    {
        int rem = num%16;
        if(rem<10){
            hexa.push_back(rem + '0');
        } else {
            hexa.push_back(rem - 10 + 'A');
        }
        num = num / 16;
    }
    reverse(hexa.begin(), hexa.end());
    return hexa;
}

int main()
{
    int n;
    cin>>n;
    string hexa = hexaconvert(n);
    cout<<hexa<<endl;
    return 0;
}
