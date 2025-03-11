#include<bits/stdc++.h>
using namespace std;
int main (){
	int s,n;
	cin >> s >> n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[i] = make_pair(a,b);
	}
	bool flag = true;
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		pair<int,int> p = v[i];
		if(p.first < s){
			s += p.second;
		}
		else{
			cout << "NO" << endl;
			flag = false;
			break;
		}
	}
	if(flag){
		cout << "YES" << endl;
	}
	return 0;
}