#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bool flag = true;
	for(int i=k;i<n;i++){
		if(a[i] != a[k-1]){
			flag = false;
			break;
		}
	}
	if(flag){
		int ans = 0;
		bool flag2 = true;
		for(int i=k-2;i>=0;i--){
			if(a[i] != a[k-1]){
				ans = i;
				flag2 = false;
				break;
			}
		}
		if(flag2){
			cout << 0 << endl;
		}
		else{
			cout << ans + 1 << endl;
		}
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}