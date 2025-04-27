#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bool flag = false;
	int i;
	int first, second;
	for(i = 1;i<n;i++){
		if(a[i] < a[i-1] && !flag){
			flag = true;
			first = i;
		}
		else if(a[i] > a[i-1] && flag){
			second = i-1;
			break;
		}
	}
	if(i == n && !flag){
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
	}
	else if(i == n && flag){
		if((first-2 >=0 && a[first-2]> a[n-1])){
			cout << "no" << endl;
		}
		else{
			cout << "yes" << endl;
			cout << first << " " << n << endl;
		}
	}
	else{
		if(a[first-1] > a[second + 1] || (first-2 >=0 && a[first-2]> a[second])){
			cout << "no" << endl;
		}
		else{
			bool flag2 = true;
			for(int i = second+1;i<n-1;i++){
				if(a[i] > a[i+1]){
					flag2= false;
					break;
				}
			}
			if(flag2){
				cout << "yes" << endl;
				cout << first << " " << second+1 << endl;
			}
			else{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}