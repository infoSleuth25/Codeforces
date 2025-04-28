#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	int s = 1;
	int e = n * n;
	while(s < e){
		cout << s << " " << e << endl;
		s++;
		e--;
	} 
	return 0;
}