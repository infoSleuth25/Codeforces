#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	vector<int> m(8,0);
	for(int i=0;i<n;i++){
		m[a[i]]++;
	}
	for(int i=0;i<8;i++){
		cout << m[i] << " ";
	}
	cout << endl;
	bool flag = true;
	int count3 = 0;
	int count1 = 0;
	int count6 = 0;
	if(m[7] > 0 || m[5] > 0){
		cout << -1 << endl;
	}
	else{
		if(m[1] >= m[3] && m[6] >= m[3]){
			count3 = m[3];
			m[1] = m[1] - m[3];
			m[6] = m[6] - m[3];
			if(m[2] >= m[1] && m[4] >= m[1]){
				count1 = m[1];
				m[2] = m[2] - m[1];
				m[4] = m[4] - m[1];
				if(m[2]==m[4] && m[4]==m[6]){
					count6 = m[6];
				}
				else{
					flag = false;
					cout << -1 << endl;
				}
			}
			else{
				flag = false;
				cout << -1 << endl;
			}
		}
		else{
			flag = false;
			cout << -1 << endl;
		}
	}
	if(flag){
		for(int i=0;i<count3;i++){
			cout << 1 << " " << 3 << " " << 6 << endl;
		}
		for(int i=0;i<count1;i++){
			cout << 1 << " " << 2 << " " << 4 << endl;
		}
		for(int i=0;i<count6;i++){
			cout << 2 << " " << 4 << " " << 6 << endl;
		}
	}
}