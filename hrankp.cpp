#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cout<<setiosflags(ios::uppercase);
    cout<<setw(0xf)<<internal;
    while(t--){
        double a; cin>>a;
        double b; cin>>b;
        double c; cin>>c;

        //LINE 1 (HEXA)
        cout<<hex<<left<<showbase<<nouppercase;
        cout<<(long long) a <<"\n";

        //LINE 2 (15 digit decimal)
        cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2);
        cout<<b<<"\n";
        //LINE 3 Scientific
        cout<<scientific<<uppercase<<noshowpos<<setprecision(9);
        cout<<c<<"\n";
    }
    return 0;
}
