#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int b[m];
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	int mn = INT_MAX;
	int mx = INT_MIN;
	for(int i=0;i<n;i++){
		mn = min(mn,a[i]);
		mx = max(mx,a[i]);
	}
	int mn2 = INT_MAX;
	for(int i=0;i<m;i++){
		mn2 = min(mn2,b[i]);
	}
	int val = max(mx, mn * 2);
	if(val < mn2){
		cout << val << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}