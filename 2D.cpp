#include <iostream>
using namespace std;
int main() {
	int N,M;
	cin>>N>>M;
	int arr[N][M];
	for(int i=0; i< N; i++){
		for(int j=0; j<M; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}
