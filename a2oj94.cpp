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
	int count = 1;
	int ans = 0;
	for(int i=1;i<n;i++){
		if(v[i][0] == v[i-1][0] && v[i][1] == v[i-1][1]){
			count++;
		}
		else{
			ans = max(count,ans);
			count = 1;
		}
	}
	ans = max(count,ans);
	cout << ans << endl;
	return 0;
}