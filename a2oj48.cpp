#include<bits/stdc++.h>
using namespace std;
int main (){
	int k;
	cin >> k;
	int a[12];
	for(int i=0;i<12;i++){
		cin >> a[i];
	}
	sort(a,a+12,greater<int>());
	bool flag = false;
	if(k == 0){
		cout << 0 << endl;
		flag = true;
	}
	else{
		int sum = 0;
		for(int i=0;i<12;i++){
			sum += a[i];
			if(sum >= k){
				cout << i + 1 << endl;
				flag = true;
				break;
			}
		}
	}
	if(!flag){
		cout << -1 << endl;
	}
	return 0;
}