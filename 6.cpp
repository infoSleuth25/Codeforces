#include<bits/stdc++.h>
using namespace std;
int main (){
	string s,t;
	cin >> s >> t;
	if(s.size() != t.size()){
		cout << "NO" << endl;
	}
	else{
		int ss = 0;
		int ee = s.size() - 1;
		bool flag = true;
		while(ss < s.size()){
			if(s[ss] != t[ee]){
				cout << "NO" << endl;
				flag = false;
				break;
			}
			ss++;
			ee--;
		}
		if(flag){
			cout << "YES" << endl;
		}
	}
	return 0;
}