#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s = 5;
    for(int i=0; i<s; i++){
        for(int j=0; j<i; j++){
            cout<<"--";
        }
        for(int k=0; k<2*(s-i)-1; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
