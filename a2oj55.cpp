#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	for(int i=0;i<=n;i++){
		int count = 0;
		for(int j=n;j>=0;j--){
			if(j<=i){
				if(i==0){
					cout << count;
				}
				else{
					cout << count << " ";
				}
				count++;
			}
			else{
				cout << " " << " ";
			}
		}
		for(int j=i-1;j>=0;j--){
			if(j==0){
				cout << j;
			}
			else{
				cout << j << " ";
			}
		}
		cout << endl;
	}
	for(int i=n-1;i>=0;i--){
		int count = 0;
		for(int j=n;j>=0;j--){
			if(j<=i){
				if(i==0){
					cout << count;
				}
				else{
					cout << count << " ";
				}
				count++;
			}
			else{
				cout << " " << " ";
			}
		}
		for(int j=i-1;j>=0;j--){
			if(j==0){
				cout << j;
			}
			else{
				cout << j << " ";
			}
		}
		cout << endl;
	}

	return 0;
}