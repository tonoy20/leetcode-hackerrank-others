#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s = 6;
    for(int i=s/2; i<s; i+=2){
        for(int j=1; j<s-i; j+=2){
            cout<<" ";
        }
        for(int j=1; j<i+1; j++){
            cout<<"*";
        }
        for(int j=1; j<s-i+1; j++){
            cout<<" ";
        }
        for(int j=1; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=s; i>0; i--){
        for(int j=0; j<s-i; j++){
            cout<<" ";
        }
        for(int j=1; j<2*i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
