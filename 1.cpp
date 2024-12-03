#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int mn = 0;
	bool flag = true;
	for(int i=1;i<n;i++){
		if(a[i] == a[mn]){
			flag = false;
		}
		else if(a[i] < a[mn]){
			mn = i;
			flag = true;
		}
	}
	if(flag){
		cout << mn + 1 << endl;
	}
	else{
		cout << "Still Rozdil" << endl;
	}
	return 0;
}