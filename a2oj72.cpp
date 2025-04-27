#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	}
	int mn = INT_MAX;
	int mx = INT_MIN;
	bool flag = false;
	int ans = -1;
	for(int i=0;i<n;i++){
		if(v[i][0] <= mn && v[i][1] >= mx){
			ans = i+1;
			flag = true;
			mn = v[i][0];
			mx = v[i][1];
		}
		else if(v[i][0] < mn){
			flag = false;
			mn = v[i][0];
		}
		else if(v[i][1] > mx){
			flag = false;
			mx = v[i][1];
		}
	}
	if(flag){
		cout << ans << endl;
	}
	else{
		cout << -1 << endl;
	}
}