#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	string a = to_string(n);
	bool flag = true;
	for(int i=0;i<a.size();){
		string temp = "";
		temp = temp + a[i];
		int j = i + 1;
		while(a[j] != '1' && j < a.size()){
			temp = temp + a[j];
			j++;
		}
		if(temp == "1" || temp == "14" || temp == "144"){
			flag = true;
		}
		else{
			cout << "NO" << endl;
			flag = false;
			break;
		}
		i = j;
	}
	if(flag){
		cout << "YES" << endl;
	}
}