#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	} 
	sort(v.begin(),v.end());
	bool flag = false;
	for(int i=0;i<n-1;i++){
		if(v[i][1] > v[i+1][1] && v[i][0] < v[i+1][0]){
			flag = true;
			break;
		}
	}
	if(flag){
		cout << "Happy Alex" << endl;
	}
	else{
		cout << "Poor Alex" << endl;
	}
	return 0;
}