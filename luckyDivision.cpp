#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[14]= {4,7,47,74,44,77,444,447,474,744,477,747,774,777};
	bool flag = false;
	for(int i=0;i<14;i++){
		if(n % a[i] == 0){
			flag = true;
			break;
		}
	}
	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}