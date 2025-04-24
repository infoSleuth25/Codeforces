#include<bits/stdc++.h>
using namespace std;
int main (){
	string a;
	cin >> a;
	string ans = "";
	bool flag = false;
	for(int i=0;i<a.size()-1;i++){
		if(a[i]=='0' && !flag){
			flag = true;
			continue;
		}
		ans = ans + a[i];
	}
	if(flag){
		ans = ans + a[a.size() -1];
	}
	cout << ans << endl;
	return 0;
}