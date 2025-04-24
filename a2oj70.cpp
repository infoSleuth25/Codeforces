#include<bits/stdc++.h>
using namespace std;
int main (){
	string a,b;
	cin >> a >> b;
	char first = 'A';
	bool flag = false;
	bool flag2 = false;
	int idx = -1;
	if(a.size()!= b.size()){
		cout << "NO" << endl;
	}
	else{
		for(int i=0;i<a.size();i++){
			if(a[i] == b[i]){
				continue;
			}
			else{
				if(first == 'A'){
					first = a[i];
					idx = i;
				}
				else{
					if(!flag){
						flag = true;
						if(b[i] == a[idx] && a[i] == b[idx]){
							continue;
						}
						else{
							flag2 = true;
							cout << "NO" << endl;
							break;
						}
					}
					else{
						flag2 = true;
						cout << "NO" << endl;
						break;
					}
				}
			}
		}
		if(!flag2){
			if(!flag){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
			}
		}
	}
}