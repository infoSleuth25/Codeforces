#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	if(n == 21){
		cout << 4 << endl;
	}
	else if(n>10 && n<20){
		cout << 4 << endl;
	}
	else if(n == 20){
		cout << 15 << endl;
	}
	else{
		cout << 0 << endl;
	}
	return 0;
}