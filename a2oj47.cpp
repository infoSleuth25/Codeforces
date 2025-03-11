#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m;
	int i = 0;
	int count = 0;
	while(i*i <= n){
		int b = n - i*i;
		if(i + b*b == m){
			count++;
		}
		i++;
	}
	cout << count << endl;
	return 0;
}