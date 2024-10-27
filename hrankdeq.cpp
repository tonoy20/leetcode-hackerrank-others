#include <bits/stdc++.h>
#include <deque>
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
	deque<int>dq;
	int s;
	for(int i=0; i<n; i++){
     //   s = 0;

     //  for(int j=i; j<k+i; j++){
     //       if(s<arr[j]) {
     //           s = arr[j]; }
     //  }
   //     cout<<s<<endl;

        s = *max_element(arr+i, arr+k+i);

        dq.push_back(s);
        if(i+k >= n)break;
	}
	deque<int>::iterator it;
    for (it = dq.begin(); it != dq.end(); ++it)
        cout << *it<<" ";
    cout << '\n';
}

int main(){

	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
