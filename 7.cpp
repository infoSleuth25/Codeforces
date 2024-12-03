#include<bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	string a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	string first = a[0];
	int count1 = 1;
	int count2 = 0;
	string second = "";
	for(int i=1;i<n;i++){
		if(first == a[i]){
			count1++;
		}
		else{
			count2++;
			second = a[i];
		}
	}
	if(count1 > count2){
		cout << first << endl;
	}
	else{
		cout << second << endl;
	}
	return 0;
}