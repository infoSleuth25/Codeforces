#include<bits/stdc++.h>
using namespace std;
int main (){
	long long int x,y,n;
	long long int MOD = 1000000007;
	cin >> x >> y >> n;
	int ans;
	int ceilvalue = ceil(double(n) / 3);
	if(n%3 == 1){
		if(ceilvalue % 2 ==1){
			ans = ((x % MOD) + MOD) % MOD;
		}
		else{
			ans = ((((-1) * x) % MOD) + MOD) % MOD;
		}
	}
	else if(n%3 == 2){
		if(ceilvalue % 2 ==1){
			ans = ((y % MOD) + MOD) % MOD;
		}
		else{
			ans = ((((-1) * y) % MOD) + MOD) % MOD;
		}
	}
	else{
		if(ceilvalue % 2 ==1){
			ans = (((y-x) % MOD) + MOD) % MOD;
		}
		else{
			ans = (((x-y) % MOD) + MOD) % MOD;
		}
	}
	cout << ans << endl;
	return 0;
}