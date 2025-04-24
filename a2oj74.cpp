#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	int mx = INT_MIN;
	for(auto it:m){
		mx = max(mx,it.second);
	}
	int temp =  ceil(float(n)/2);
	if(mx <= temp){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}