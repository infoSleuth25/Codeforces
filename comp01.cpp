#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count1 = 0;
		for(int i=0;i<n;i++){
			if(s[i] == '1'){
				count1++;
			}
		}
		int ans = 0;
		for(int i=0;i<n;i++){
			if(s[i] == '1'){
				ans += count1 - 1;
			}
			else{
				ans += count1 + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}