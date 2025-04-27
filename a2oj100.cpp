#include<bits/stdc++.h>
using namespace std;
int main (){
	int a,b,n;
	cin >> a >> b >> n;
	if(b > 10){
		int temp = a % b;
		int curr = temp * 10;
		bool flag = false;
		for(int i=0;i<=9;i++){
			if((curr+i)%b == 0){
				a = a *10+i;
				flag = true;
				break;
			}
		}
		if(flag){
			string ans = to_string(a);
			for(int i=1;i<n;i++){
				ans.push_back('0');
			}
			cout << ans << endl;
		}
		if(!flag){
			cout << -1 << endl;
		}
	}
	else{
		int temp = a % b;
		int curr = temp * 10;
		for(int i=0;i<=9;i++){
			if((curr+i)%b == 0){
				a = a * 10 + i;
				break;
			}
		}
		string ans = to_string(a);
		for(int i=1;i<n;i++){
			if(b==10){
				ans.push_back('0');
			}
			else{
				ans.push_back(b + '0');
			}
		}
		cout << ans << endl;
	}
	return 0;
}