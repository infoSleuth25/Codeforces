#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin >> s;
	string ans = "";
	string word = "";
	for(int i=0;i<s.size();i++){
		word.push_back(s[i]);
		if(word.size() >= 3){
			int m = word.size();
			if(word[m-1]=='B' && word[m-2]=='U' && word[m-3]=='W'){
				word.pop_back();
				word.pop_back();
				word.pop_back();
				if(word.size() > 0){
					ans = ans + word + " ";
					word = "";
				}
			}
		}
	}
	if(word!= ""){
		ans = ans + word + " ";
	}
	ans.pop_back();
	cout << ans << endl;
	return 0;
}

