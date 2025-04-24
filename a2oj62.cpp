#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	map<int,int> m;
	unordered_map<int,int> m2;
	bool flag = true;
	for(int i=0;i<n;i++){
		if(m.find(a[i])== m.end()){
			m[a[i]] = (-1) * i;
		}
		else{
			if(m[a[i]] <= 0){
				m[a[i]] *= (-1);
				m[a[i]] = i - m[a[i]];
			}
			else{
				if(i-m[a[i]] >= 0 && a[i] == a[i-m[a[i]]]){
					continue;
				}
				else{
					m2[a[i]]++;
				}
			}
		}
	}
	cout << m.size() - m2.size() << endl;
	for(auto it : m){
		if(m2.find(it.first) == m2.end()){
			if(it.second < 0){
				it.second = 0;
			}
			cout << it.first << " " << it.second << endl;
		}
	}
	return 0;
}