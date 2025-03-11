#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin >> s;
	string hello = "hello";
	int curr = 0;
	bool flag = false;
	for(int i=0;i<s.size();i++){
		if(s[i]== hello[curr]){
			curr++;
		}
		if(curr == 5){
			flag = true;
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