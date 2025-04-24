#include<bits/stdc++.h>
using namespace std;
int main (){
	string s1,s2;
	getline(cin, s1);
    getline(cin, s2);
	vector<int> m1(58,0);
	for(int i=0;i<s1.size();i++){
		if(s1[i] != ' '){
			m1[s1[i]-65]++;
		}
	}
	vector<int> m2(58,0);
	int count = 0;
	for(int i=0;i<s2.size();i++){
		if(s2[i] != ' '){
			m2[s2[i]-65]++;
		}
	}
	bool flag = true;
	for(int i=0;i<m2.size();i++){
		if(m2[i] <= m1[i]){
			continue;
		}
		else{
			flag = false;
			break;
		}
	}
	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}