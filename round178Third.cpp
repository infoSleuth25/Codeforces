#include<bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<bool> alice(n+1,false);
		vector<bool> bob(n+1,false);
		for(int i=0;i<s.size();i++){
			if(s[i]=='A'){
				alice[i+1] = true;
			}
			else{
				bob[i+1] = true;
			}
		}
		if(alice[1] && alice[n]){
			cout << "Alice" << endl;
		}
		else if(bob[1] && bob[n]){
			cout << "Bob" << endl;
		}
		else{
			int secondAlice = -1;
			int secondBob = -1;
			for(int i=n-1;i>=0;i--){
				if(alice[i] == 1){
					secondAlice = i;
					break;
				}
			}
			for(int i=n-1;i>=0;i--){
				if(bob[i] == 1){
					secondBob = i;
					break;
				}
			}
			if(secondAlice == -1 && alice[n] == 1){
				cout << "Bob" << endl;
			}
			else if(secondBob == -1 && bob[n] == 1){
				cout << "Alice" << endl;
			}
			else{
				if(secondAlice == -1 && alice[1] == 1 && secondBob != -1){
					cout << "Bob" << endl;
				}
				else if(secondBob == -1 && bob[1] == 1 && secondAlice != -1){
					cout << "Alice" << endl;
				}
				else{
					if(bob[n] == 1){
						cout << "Bob" << endl;
					}
					else{
						if(secondAlice > secondBob){
							cout << "Alice" << endl;
						}
						else{
							cout << "Bob" << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}