#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector<int> temp;
	int i = 100001;
	while(n>0){
		cout << i << " ";
		i++;
		n--;
	}
	cout << endl;
	return 0;
}