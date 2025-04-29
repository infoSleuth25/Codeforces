#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,m;
	cin >> n >> m;
	int currSum = (n*(n+1))/2;
	m = m % currSum;
	for(int i=1;i<=n;i++){
		if(i > m){
			cout << m << endl;
			break;
		}
		else{
			m = m - i;
		}
	}
	return 0;
}