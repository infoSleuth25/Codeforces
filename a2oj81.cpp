#include<bits/stdc++.h>
using namespace std;
int countTotalDivisors(int num){
	int count = 0;
	for(int i=1;i<=sqrt(num);i++){
		if(num % i == 0){
			if(i * i == num){
				count++;
			}
			else{
				count = count + 2;
			}
		}
	}
	return count;
}
int main (){
	int a,b,c;
	cin >> a >> b >> c;
	long long int sum = 0;
	unordered_map<int,int> m;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				int curr = i * j * k;
				if(m.find(curr) == m.end()){
					m[curr] = countTotalDivisors(curr);
					sum = sum + countTotalDivisors(curr);
				}
				else{
					sum = sum + m[curr];
				}
				sum = sum % (1073741824);
			}
		}
	}
	cout << sum << endl;
	return 0;
}