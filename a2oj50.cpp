#include<bits/stdc++.h>
using namespace std;
int main (){
	int k;
	cin >> k;
	string s;
	cin >> s;
	unordered_map<char,int> m;
	for(int i=0;i<s.size();i++){
		m[s[i]]++;
	}
	string word = "";
	bool flag = true;
	for(auto it : m){
		if(it.second % k == 0){
			for(int i=0;i<it.second/k;i++){
				word.push_back(it.first);
			}
		}
		else{
			flag = false;
			cout << -1 << endl;
			break;
		}
	}
	if(flag){
		int temp = s.size() / word.size();
		string ans = "";
		for(int i=0;i<temp;i++){
			ans += word;
		}
		cout << ans << endl;
	}
	return 0;
}