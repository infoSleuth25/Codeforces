#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		int sum = a + b + c;
		if(sum%3 != 0){
			cout << "NO" << endl;
		}
		else{
			int total = sum / 3;
			if(a > total || b > total){
				cout << "NO" << endl;
			}
			else{
				int temp1 = c - total;
				int temp2 = 2*total - a - b;
				if(temp1 == temp2){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
		}
	}
	return 0;
}