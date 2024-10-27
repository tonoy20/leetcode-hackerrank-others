#include<bits/stdc++.h>
using namespace std;

void printNGE(int ar[], int n){
    stack<int>s;
    s.push(ar[0]);

    for(int i=1; i<n; i++){
        if(s.empty()){
            s.push(ar[i]);
            continue;
        }

        while(s.empty() == false && s.top()<ar[i]){
            cout<<s.top()<<"->"<<ar[i]<<endl;
            s.pop();
        }
        s.push(ar[i]);
    }
    while(s.empty() == false){
        cout<<s.top()<<"->"<<-1<<endl;
        s.pop();
    }
}

int main()
{
    int ar[] = { 11, 13, 21, 3 };
    int n = sizeof(ar) / sizeof(ar[0]);
    printNGE(ar, n);

    return 0;
}
