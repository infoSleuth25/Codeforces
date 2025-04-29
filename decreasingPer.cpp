#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	int temp = n - k;
	for(int i=1;i<temp;i++){
		cout << i << " ";
	}
	for(int i=n;i>=temp;i--){
		cout << i << " ";
	}
	cout << endl;
	return 0;
}

