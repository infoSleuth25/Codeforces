#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		bool flag = false;
		for(int i=0;i<n;i++){
			if(i == x){
				flag = true;
			}
			else{
				cout << i << " ";
			}
		}
		if(flag){
			cout << x << endl;
		}
		else{
			cout << endl;
		}
	}
	return 0;
}