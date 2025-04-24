#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	string str;
	cin >> str ;
	string str1 = "";
	string str2 = "";
	for(int i=0;i<str.size();i++){
		if(i < n){
			str1 += str[i];
		}
		else{
			str2 += str[i];
		}
	}
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	bool flag = true;
	bool greater = false;
	bool lesser = false;
	for(int i=0;i<str1.size();i++){
		if(str1[i] == str2[i]){
			flag = false;
			break;
		}
		if(i == 0){
			if(str1[i] > str2[i]){
				greater = true;
			}
			else{
				lesser = true;
			}
		}
		else{
			if((str1[i] > str2[i] && lesser) || (str1[i] < str2[i] && greater)){
				flag = false;
				break;
			}
		}
	}	
	if(!flag){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
	return 0;
}