#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	long long int sum = 0;
	for(int i=0;i<n;i++){
		sum += a[i];
	}
	if(sum % n == 0){
		cout << n << endl;
	}
	else{
		cout << n-1 << endl;
	}
	return 0;
}