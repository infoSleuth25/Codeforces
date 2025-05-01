#include<bits/stdc++.h>
using namespace std;
void helper(vector<int>& v1){
	cout << v1.size() << " ";
	for(int i=0;i<v1.size();i++){
		cout << v1[i] << " ";
	}
	cout << endl;
}
int main (){
	int n;
	cin >> n;
	int a[n];
	int count = 0;
	int count3 = 0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i] > 0){
			count++;
		}
		else if(a[i] < 0){
			count3++;
		}
	}
	vector<int> v1,v2,v3;
	int count2 = 0;
	for(int i=0;i<n;i++){
		if(a[i]< 0){
			if(count == 0 && count2 <2){
				v2.push_back(a[i]);
				count2++;
			}
			else if(count3 % 2 == 0){
				v3.push_back(a[i]);
				count3--;
			}
			else{
				v1.push_back(a[i]);
			}
		}
		else if(a[i] > 0){
			v2.push_back(a[i]);
		}
		else{
			v3.push_back(a[i]);
		}
	}
	helper(v1);
	helper(v2);
	helper(v3);
	return 0;
}