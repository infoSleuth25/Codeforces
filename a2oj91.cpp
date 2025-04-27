#include<bits/stdc++.h>
using namespace std;
bool helper(int n){
	for(int i=3;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main (){
	int n;
	cin >> n;
	while(n--){
		long long int a;
		cin >> a;
		if(a==4){
			cout << "YES" << endl;
		}
		else if(a<=3 || a%2 == 0){
			cout << "NO" << endl;
		}
		else{
			long long curr = sqrt(a);
			if(curr * curr == a){
				if(helper(curr)){
					cout << "YES" << endl;
				}
				else{
					cout << "NO" << endl;
				}
			}
			else{
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}