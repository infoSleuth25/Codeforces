#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin >> s;
	unordered_map<char,int> m;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	int count = 0;
	for(auto it : m){
		if(it.second % 2 == 1){
			count++;
		}
	}
	if(count == 0 || count % 2== 1){
		cout << "First" << endl;
	}
	else{
		cout << "Second" << endl;
	}
	return 0;
}