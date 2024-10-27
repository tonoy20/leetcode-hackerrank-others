#include<iostream>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int g,p;
        cin>>g>>p;
        int s=0;
        int n;
        cin>>n;
        int a,b,s1=0,s2=0;
        while(n--){
            cin>>a>>b;
            if(a==1)s1++;
            if(b==1) s2++;
        }
        if(s1>=s2) s = s1* min(g,p) + s2 * max(g,p);
        else s = s2 * min(g,p) + s1 * max(g,p);

        cout<<s<<endl;
    }
    return 0;
}
