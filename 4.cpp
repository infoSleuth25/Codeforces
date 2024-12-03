#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m;
	int a[m];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	long long int ans = a[0] - 1;
	for(int i=1;i<m;i++){
		if(a[i] >= a[i-1]){
			ans += a[i] - a[i-1];
		}
		else{
			ans += n - a[i-1] + 1 + (a[i] - 1);
		}
	}
	cout << ans << endl;
}