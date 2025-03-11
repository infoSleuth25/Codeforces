#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,a,b;
	cin >> n >> a >> b;
	int mx = max(a+1,n-b);
	cout << n - mx + 1 << endl;
	return 0;
}