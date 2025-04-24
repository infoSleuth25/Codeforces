#include<bits/stdc++.h>
using namespace std;
int main (){
	int y,k,n;
	cin >> y >> k >> n;
	bool flag = false;
	int rem = y % k;
	int x = n - y;
	for(int i=k - rem;i<=x;i = i+k){
		flag = true;
		cout << i << " ";
	}
	if(!flag){
		cout << -1;
	}
	cout << endl;
	return 0;
}