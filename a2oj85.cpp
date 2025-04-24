#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int count25 = 0;
	int count50 = 0;
	int count100 = 0;
	bool flag = true;
	for(int i=0;i<n;i++){
		if(a[i] == 25){
			count25++;
		}
		else if(a[i] == 50){
			if(count25 > 0){
				count25--;
				count50++;
			}
			else{
				flag = false;
				break;
			}
		}
		else{
			if(count50 > 0 && count25 > 0){
				count50--;
				count25--;
				count100++;
			}
			else if(count25 >= 3){
				count25 = count25 - 3;
				count100++;
			}
			else{
				flag = false;
				break;
			}
		}
	}
	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}