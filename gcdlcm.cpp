#include<bits/stdc++.h>
using namespace std;
int gcd(int m,int n)
{
    int r = 0,a,b;
    a = (m>n) ? m : n;
    b = (m<n) ? m : n;
    r = b;
    while(a % b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
int lcm(int m,int n) {
    int a;
    a = (m>n) ? m : n;
    a = m*n;
    int r = a/gcd(m,n);

    return r;
  //  while(true){
  //      if(a % m == 0 && a % n == 0)
  //          return a;
  //          a++;
  //  }
}

int main()
{
    int n,m;
    cin>>m>>n;
    cout << "The GCD of two numbers is: " << gcd(m, n) << endl;
    cout << "The LCM of two numbers is: " << lcm(m, n) << endl;
    return 0;
}
