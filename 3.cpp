#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}	
	int sum = 0;
	int ans = 0;
	int count0 = 0;
	for(int i=0;i<n;i++){
		if(a[i] == 0){
			count0++;
		}
		else{
			sum += 5;
		}
		if(sum % 9 == 0){
			ans = sum / 5;
		}
	}
	string anss = "";
	if(ans > 0 && count0 > 0){
		for(int i=0;i<ans;i++){
			anss.push_back('5');
		}
		for(int i=0;i<count0;i++){
			anss.push_back('0');
		}
	}
	else if(count0 == 0){
		cout << -1 << endl;
	}
	else{
		cout << 0 << endl;
	}
	cout << anss << endl;
	return 0;
}