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
		cout << k -1 << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}