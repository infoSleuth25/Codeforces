#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	int mx = 0;
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(b[j] % a[i] == 0){
				if(mx < b[j] / a[i]){
					mx = b[j] / a[i];
					count = 1;
				}
				else if(mx == b[j] / a[i]){
					count++;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}