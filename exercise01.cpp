#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,s,t;
	cin >> n >> s>> t;
	int p[n];
	for(int i=0;i<n;i++){
		cin >> p[i];
	}
	bool flag = false;
	int count = 0; 
	if(s==t){
		flag = true;
	}
	int curr = s;
	int i= 0;
	while(s!=t){
		s = p[s-1];
		count++;
		if(s==t){
			flag = true;
			break;
		}
		if(curr==s){
			break;
		}
	}
	if(s==t){
		flag = true;
	}
	if(flag){
		cout << count << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}