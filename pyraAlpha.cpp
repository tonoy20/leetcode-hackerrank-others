#include<bits/stdc++.h>
using namespace std;
int main()
{
    char input,alpha='A';
    cin>>input;

    input = toupper(input);

    for(int i=1; i<=(input-'A'+1); i++){
        for(int j=0; j<=i; j++){
            cout<<alpha<<" ";
        }
        ++alpha;
        cout<<endl;
    }
    return 0;

}
