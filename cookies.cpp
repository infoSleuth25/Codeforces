#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int countOdd = 0;
	int countEven = 0;
	int total = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2 == 1){
			countOdd++;
		}
		else{
			countEven++;
		}
		total += a[i];
	}
	if(total % 2 == 0){
		cout << countEven << endl;
	}
	else{
		cout << countOdd << endl;
	}
	return 0;
}