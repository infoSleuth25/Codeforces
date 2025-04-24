#include<bits/stdc++.h>
using namespace std;
int helper(int n,int a,int b,int c,vector<int>& memo){
	if(n == 0){
		return 0;
	}
	if(n <= 0){
		return INT_MIN;
	}
	if(memo[n] != -1){
		return memo[n];
	}
	int res = max({helper(n-a,a,b,c,memo),helper(n-b,a,b,c,memo),helper(n-c,a,b,c,memo)});
	if(res == INT_MIN){
		return memo[n] = INT_MIN;
	}
	return memo[n] = res + 1;
}
int main (){
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	vector<int> memo(n+1,-1);
	int ans = helper(n,a,b,c,memo);
	cout << ans << endl;
	return 0;
}