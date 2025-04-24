#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	if(n == 1){
		cout << "NO" << endl;
	}
	else{
		int count100 = 0;
		int count200 = 0;
		for(int i=0;i<n;i++){
			if(a[i] == 100){
				count100++;
			}
			else{
				count200++;
			}
		}
		if(count100 % 2 == 1 && count200 % 2 == 1){
			cout << "NO" << endl;
		}
		else if(count100 % 2 == 0 && count200 % 2 == 0){
			cout << "YES" << endl;
		}
		else if(count100 != 0 && count100 % 2 == 0 && count200 % 2 == 1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}