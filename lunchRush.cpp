#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	}
	int ans = INT_MIN;
	for(int i=0;i<n;i++){
		if(v[i][1] > k){
			ans = max(ans, (v[i][0] - (v[i][1] -k)));
		}
		else{
			ans = max(ans,v[i][0]);
		}
	}
	cout << ans << endl;
	return 0;
}