#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	cin >> s;
	string ans = "";
	for(int i=0;i<s.size();i++){
		if(s[i]=='A'|| s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='i' || s[i]=='y' || s[i]=='o'){
			continue;
		}
		else{
			char temp = s[i];
			if(temp >= 65 && temp <= 90){
				temp = temp + 32;
			}
			ans.push_back('.');
			ans.push_back(temp);
		}
	}
	cout << ans << endl;
	return 0;
}