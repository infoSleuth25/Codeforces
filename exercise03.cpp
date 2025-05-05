#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m;
	vector<vector<int>> input(m); 
	for(int i=0;i<n;i++){
		int len;
        cin >> len;
        input[i].resize(len);
        for(int j = 0; j < len; ++j){
        	cin >> input[i][j];
        }
	}
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++){
		for(int j=0;j<input[i].size();j++){
			if(input[i][j]!= 0){
				mp[input[i][j]]++;
			}
		}
	}
	int count = 0;
	for(auto it : mp){
		count = max(count,it.second);
	}
	cout << n-count << endl;
	return 0;
}