#include<bits/stdc++.h>
using namespace std;

void reverseStringWithStack(string &str){
    stack<char>s;
    for(auto it:str) s.push(it);
    str.clear();
    while(!s.empty()) {
        str.push_back(s.top());
        s.pop();
    }
}

int main()
{
    string s = "Arif Al Monsor";
    reverseStringWithStack(s);
    cout<<s<<endl;
    return 0;
}
