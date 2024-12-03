#include<bits/stdc++.h>
using namespace std;
int helper()
int main (){
	int n;
	cin >> n;
	if(n == 0){
		cout << 0 << " " << 0 << " " << 0 << endl;
	}
	else if(n == 1){
		cout << 0 << " " << 0 << " " << 1 << endl;
	}
	else if(n == 2){
		cout << 0 << " " << 0 << " " << 2 << endl;
 	}
	else{
		int prev = 2;
		int prev2 = 1;
		int prev3 = 1;

		while(true){
			int temp = prev + prev2;
			if(temp == n){
				break;
			}
			else{
				prev3 = prev2;
				prev2 = prev;
				prev = temp;
			}
		}
		cout << prev3 << " " << prev2 << " " << prev2 << endl;
	}
	return 0;
}