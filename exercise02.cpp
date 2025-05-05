#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	int count = 0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i] == i){
			count++;
		}
	}
	if(count == n){
		cout << n << endl;
	}
	else{
		int ans = count + 1;
		for(int i=0;i<n;i++){
			if(a[i] != i){
				if(a[a[i]] == i){
					ans += 1;
					break;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}