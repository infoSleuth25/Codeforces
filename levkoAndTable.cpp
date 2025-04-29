#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	int temp = k - n + 1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == j){
				cout << temp << " ";
			}
			else{
				cout << 1 << " ";
			}
		}
		cout << endl;
	}
	return 0;
}