#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int mn = INT_MAX;
	long long int mnCount = 0;
	int mx = INT_MIN;
	long long int mxCount = 0;
	for(int i=0;i<n;i++){
		if(a[i] == mn){
			mnCount++;
		}
		
		if(a[i] < mn){
			mnCount = 1;
			mn = a[i];
		}

		if(a[i] == mx){
			mxCount++;
		}	
		
		if(a[i] > mx){
			mxCount = 1;
			mx = a[i];
		}
	}
	if(mx == mn){
		cout << mx - mn << " " << (mnCount * (mnCount-1))/2 << endl;
	}
	else{
	cout << mx - mn << " " << mnCount * mxCount << endl;
	}
	return 0;
}