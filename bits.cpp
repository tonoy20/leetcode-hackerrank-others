#include <iostream>
using namespace std;

int count_one(int n){
    int cnt=0;
    while(n){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

int main() {
	int t;
	cin>>t;
	while(t--){
        int num;
        cin>>num;
        cout<<count_one(num)<<endl;
	}
	return 0;
}
