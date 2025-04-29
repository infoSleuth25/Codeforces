#include<bits/stdc++.h>
using namespace std;
int main (){
	int r,c;
	cin >> r >> c;
	vector<vector<char>> v(r,vector<char>(c));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> v[i][j];
		}
	}
	vector<bool> col(c,0);
	vector<bool> row(r,0);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(v[i][j] == 'S'){
				col[j] = 1;
				row[i] = 1;
			}
		}
	}
	int total = 0;
	int ans = 0;
	for(int i=0;i<r;i++){
		if(row[i] == 0){
			total++;
			ans += c;
		}
	}
	for(int j=0;j<c;j++){
		if(col[j] == 0){
			ans += r - total;
		}
	}
	cout << ans << endl;
	return 0;
}