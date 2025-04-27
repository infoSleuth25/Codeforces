#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	unordered_map<int,int> mp;
	int ans[n];
	for(int i=n-1;i>=0;i--){
		mp[a[i]]++;
		ans[i] = mp.size();
	}
	while(m--){
		int curr;
		cin >> curr;
		cout << ans[curr -1] << endl;
	}
	return 0;
}