#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int count = 0;
	for(int i=3;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum = i*i + j * j;
			int k = sqrt(sum);
			if(k*k == sum && k<=n && k > j){
				count++;
			}
		}
	}
	cout << count << endl;
}