#include<bits/stdc++.h>
using namespace std;
long long int mnsell(int n,int m, int a[]){
	long long int ans = 0;
	for(int i=0;i<m;i++){
		if(n == 0){
			break;
		}
		if(a[i] <= n){
			n = n - a[i];
			ans += (a[i] * (a[i]+1))/2;
		}
		else{
			int curr = a[i] - n;
			n = 0;
			ans += (a[i] * (a[i]+1))/2 - (curr*(curr+1))/2;
		}
	}
	return ans;
}
long long int mxsell(int n,int m,int a[]){
	long long int ans = 0;
	while(n > 0){
		sort(a,a+m,greater<int>());
		if(a[0] == 0){
			break;
		}
		ans += a[0];
		a[0] = a[0] - 1;
		n--;
	}
	return ans;
}
int main (){
	int n,m;
	cin >> n >> m;
	int a[m];
	for(int i=0;i<m;i++){
		cin >> a[i];
	}	
	sort(a,a+m);
	long long int mnSell = mnsell(n,m,a);
	long long int mxSell = mxsell(n,m,a);

	cout << mxSell << " " << mnSell << endl;
	return 0;
}