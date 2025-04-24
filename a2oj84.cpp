#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector<vector<int> > v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	}
	int countUpper = 0;
	int countLower = 0;
	bool evenOddPair = false;
	for(int i=0;i<n;i++){
		countUpper += v[i][0];
		countLower += v[i][1];
		if((countUpper % 2) != (countLower % 2)){
			evenOddPair = true;
		}
	} 
	if(countUpper % 2 == 0 && countLower % 2 == 0){
		cout << 0 << endl;
	}
	else if(countUpper % 2 == 1 && countLower % 2 == 1 && evenOddPair){
		cout << 1 << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}