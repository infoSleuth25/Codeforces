#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	long long int sum = 0;
	int ans = 0;
	for(int i=0;i<k;i++){
		sum += a[i];
	}
	long long int mnsum = sum;
	for(int i=1;i<=n-k;i++){
		sum = sum + a[i+k-1] - a[i-1];
		if(mnsum > sum){
			ans = i;
			mnsum = sum;
		} 
	}
	cout << ans + 1 << endl;
	return 0;
}