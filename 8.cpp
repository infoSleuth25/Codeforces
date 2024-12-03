#include<bits/stdc++.h>
using namespace std;
int main (){
	int a,b,c;
	cin >> a >> b >> c;
	int temp1 = sqrt((a*c)/b);
	int temp2 = a / temp1;
	int temp3 = b / temp2;
	cout << 4 * (temp1 + temp2 + temp3) << endl;
	return 0;
}