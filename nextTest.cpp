#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	bool flag = false;
	for(int i=0;i<n;i++){
		if(a[i] != i+1){
			cout << i+1 << endl;
			flag = true;
			break;
		}
	}
	if(!flag){
		cout << n+1 << endl;
	}
	return 0;
}