#include<bits/stdc++.h>
using namespace std;
int helper(int a){
	int num1 = 0;
	int i =0;
	while(a > 0){
		int temp = a % 10;
		if(temp != 0){
			num1 += temp * (pow(10,i));
			i++;
		}
		a = a / 10;
	}
	return num1;
}
int main (){
	int a,b;
	cin >> a >> b;
	int num1 = helper(a);
	int num2 = helper(b);
	int ans = helper(a+b);
	if(num1 + num2 == ans){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}