
#include <bits/stdc++.h>
using namespace std;
int main() {
	long int d, oc, of, od,cs,cb, cm,cd;
	cin>>d>>oc>>of>>od>>cs>>cb>>cm>>cd;
	long int s1 = oc + (d-of) * od;

	long int s2 = cb + (d / cs)*cm +cd*d;
	if(s1<=s2) {
		cout<<"Online Taxi"<<endl;
	}  else {
		cout<<"Classic Taxi"<<endl;
	}
}
