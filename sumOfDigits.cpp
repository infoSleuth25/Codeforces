#include<bits/stdc++.h>
using namespace std;
long long helper(string n){
	long long sum = 0;
	for(int i=0;i<n.size();i++){
		sum += (n[i] - 48);
	}
	return sum;
}
int main (){
	string n;
	cin >> n;
	int count = 0;
	while(n.size() > 1){
		long long temp = helper(n);
		n = to_string(temp);
		count++;
	}
	cout << count << endl;
	return 0;
}