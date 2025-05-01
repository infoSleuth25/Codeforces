#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,x,y;
	cin >> n >> x >> y;
	int required = ceil(float(n*y)/100);
	if(x >= required){
		cout << 0 << endl;
	}
	else{
		cout << required - x << endl;
	}
	return 0;
}