#include <bits/stdc++.h>
using namespace std;
int ar[1001][1001];

int main() {
	int N,M,x,y;
	cin >> N>>M;

	// for(int i = 0;i < N;++i)
    //     for(int j = 0;j < M;++j)
    //         ar[i][j] = 0;

	for(int i=0; i<M; i++){
		cin>>x>>y;
	ar[x][y]=1;
	ar[y][x]=1;
	}
	int q;
	cin>>q;
	while(q--) {
		int a,b;
		cin>>a>>b;
		if(ar[a][b]==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}
