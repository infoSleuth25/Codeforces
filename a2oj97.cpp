#include<bits/stdc++.h>
using namespace std;
int main (){
	long long int n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	unordered_map<char,long long int> m;
	for(int i=0;i<n;i++){
		m[s[i]]++;
	}
	vector<long long int> v;
	for(auto it: m){
		v.push_back(it.second);
	}
	sort(v.begin(),v.end(),greater<int>());
	long long int ans = 0;
	for(int i=0;i<v.size();i++){
		if(v[i] >= k){
			ans = ans + (k * k);
			k = 0;
		}
		else{
			ans = ans + (v[i]*v[i]);
			k = k - v[i];
		}
		if(k == 0){
			break;
		}
	}
	cout << ans << endl;
	return 0;
}