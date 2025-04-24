#include<bits/stdc++.h>
using namespace std;
int main (){
	vector<vector<char>> v(4,vector<char>(4));
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin >> v[i][j];
		}
	}
	bool flag = false;
	for(int i=1;i<4;i++){
		for(int j=1;j<4;j++){
			char a = v[i][j];
			char b = v[i-1][j];
			char c = v[i][j-1];
			char d = v[i-1][j-1];
			if((a == b && b == c && c==d) || (a == b && b == c) || (b == c && c == d) || (a == c && c == d)){
				flag = true;
				break;
			}
		}
	}
	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}