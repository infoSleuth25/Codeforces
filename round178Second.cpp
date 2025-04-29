#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int mx = INT_MIN;
		int prefix[n];
		for(int i=0;i<n;i++){
			mx = max(mx,a[i]);
			prefix[i] = mx;
		}
		long long int sum = 0;
		for(int i=n-1;i>=1;i--){
			sum = sum + a[i];
			long long int curr = max(sum, sum-a[i]+prefix[i-1]);
			cout << curr << " ";
		}
		cout << sum + a[0] << endl;
	}
	return 0;
}