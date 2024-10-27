#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s = 5;
    for(int i=0; i<s; i++)
    {
        for(int j=0; j<s-i-1; j++)
            cout<<" ";

        for(int k=0; k<2*i+1; k++)
        {
            if(i==0 || i == s-1)
            {
                cout<<"*";
            }
            else
            {
                if(k ==0 || k == 2*i)
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
