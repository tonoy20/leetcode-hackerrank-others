#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=0; j<=n-i; j++){
            cout<<"--";
        }
        for(int j=i; j<=2*i-1; j++){
            cout<<"* ";
        }
        for(int j=0; i<i-1; j++)
            cout<<"* ";

         //   while(k!=2*i-1){
         //       cout<<"* ";
         //       k--;
         //   }

            cout<<endl;

    }
    return 0;
}
