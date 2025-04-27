#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int curr = n * 3;
		int ans = floor(float(curr) * 3 / 4);
		cout << ans << endl;
	}
	return 0;
}

