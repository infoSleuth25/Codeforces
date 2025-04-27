// 7 
// No result

// 6
// 1 2 6
// 1 3 6

// 5
// No result

// 4
// 1 2 4

// 3
// No result

// 2
// NO result

// 1
// No result

#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		m[a]++;
	}
	int flag4 = 0;
	int count = 0;
	bool flag = true; 
	if(m.find(7)!= m.end() || m.find(5)!= m.end()){
		flag = false;
	}
	if(m.find(4)!= m.end() && m[4]!=0 && flag){
		int total = m[4];
		if(m.find(1)!= m.end() && m.find(2)!=m.end()){
			if(total<= m[1] && total<=m[2]){
				m[1] = m[1] - total;
				m[2] = m[2] - total;
				m[4] = m[4] - total;
				flag4 = total;
				count += total * 3;
			}
		}
		else{
			flag = false;
		}
	}
	int flag2 = 0;
	if(m.find(2) != m.end() && m[2]!=0 && flag){
		int total = m[2];
		if(m.find(1)!= m.end() && m.find(6)!=m.end()){
			if(total<= m[1] && total<=m[6]){
				m[1] = m[1] - total;
				m[6] = m[6] - total;
				m[2] = m[2] - total;
				flag2 = total;
				count += total * 3;
			}
		}
		else{
			flag = false;
		}
	}
	int flag6 = 0;
	if(m.find(6) != m.end() && m[6]!=0 && flag){
		int total = m[6];
		if(m.find(1)!= m.end() && m.find(3)!=m.end()){
			if(total<= m[1] && total<=m[3]){
				m[1] = m[1] - total;
				m[3] = m[3] - total;
				m[6] = m[6] - total;
				flag6 = total;
				count += total * 3;
			}
		}
		else{
			flag = false;
		}
	}
	if(!flag || n!=count){
		cout << -1 << endl;
	}
	else{
		for(int i=0;i<flag4;i++){
			cout << "1 2 4" << endl;
		}
		for(int i=0;i<flag2;i++){
			cout << "1 2 6" << endl;
		}
		for(int i=0;i<flag6;i++){
			cout << "1 3 6"<<endl;
		}
	}
	return 0;
}