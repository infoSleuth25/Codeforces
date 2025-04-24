#include<bits/stdc++.h>
using namespace std;
int main (){
	ifstream fin("input.txt");
    ofstream fout("output.txt");
	int b;
	fin >> b;
	int n = b * 2;
	int a[n];
	for(int i=0;i<n;i++){
		fin >> a[i];
	}
	unordered_map<int,int> m1;
	for(int i=0;i<n;i++){
		m1[a[i]]++;
	}
	bool flag = true;
	for(auto it: m1){
		if(it.second % 2 != 0){
			flag = false;
			break;
		}
	}
	if(!flag){
		fout << -1 << endl;
	}
	else{
		unordered_map<int,int> m;
		for(int i=0;i<n;i++){
			if(m.find(a[i]) == m.end()){
				m[a[i]] = i+1;
			}
			else{
				fout << m[a[i]] << " " << i +1 << endl;
				m.erase(a[i]);
			}
		}
	}
	fin.close();
    fout.close();
	return 0;
}