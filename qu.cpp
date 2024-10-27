#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    deque<int>q;
    while(n--){
        char s;
        cin>>s;
        if(s=='E'){
            int a;
            cin>>a;
            q.push_back(a);
            cout<<q.size()<<endl;
        } else if(s=='D') {
            if(q.empty()){
                cout<<-1<<" "<<q.size()<<endl;
            } else {
                int b = q.front();
                q.pop_front();
                cout<<b<<" "<<q.size()<<endl;
            }
        }

    }
    return 0;
}
