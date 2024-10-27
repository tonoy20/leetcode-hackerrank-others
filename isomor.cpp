#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string s,string t)
{
    int n = s.length();
    unordered_map<char,char>rep;
    unordered_map<char, bool>use;

    for(int i=0; i < n; i++){
        if(rep.count(s[i])){
            if(rep[s[i]] != t[i])
                return false;
            } else {
                if(use[t[i]]){
                    return false;
                }
                rep[s[i]] = t[i];
                use[t[i]] = true;
            }
    }
    return true;
}


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<isomorphic(s1,s2)<<endl;
    return 0;
}
