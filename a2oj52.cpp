#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin >> s;
	int count = 1;
	char curr = s[0];
	bool flag = false;
	for(int i=0;i<s.size();i++){
		if(s[i]== curr){
			count++;
		}
		else{
			curr = s[i];
			count = 1;
		}
		if(count == 7){
			cout << "YES" << endl;
			flag = true;
			break;
		}
	}
	if(!flag){
		cout << "NO" << endl;
	}
	return 0;
}