#include<bits/stdc++.h>
using namespace std;
void helper(vector<int>& v,long long int& ans,int a[5][5],int idx){
	if(idx == 5){
		long long int curr = (a[v[0]][v[1]]+a[v[1]][v[0]]+a[v[2]][v[3]]+a[v[3]][v[2]])+(a[v[1]][v[2]]+a[v[2]][v[1]]+a[v[3]][v[4]]+a[v[4]][v[3]])+(a[v[2]][v[3]]+a[v[3]][v[2]]+a[v[3]][v[4]]+a[v[4]][v[3]]);
		if(ans < curr){
			ans = curr;
		}
		return ;
	}
	for(int i=idx;i<5;i++){
		swap(v[idx],v[i]);
		helper(v,ans,a,idx+1);
		swap(v[idx],v[i]);
	}
}
int main (){
	int a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];
		}
	}
	vector<int> v(5);
	for(int i=0;i<5;i++){
		v[i] = i;
	}
	long long int ans = 0;
	helper(v,ans,a,0);
	cout << ans << endl;
	return 0;
}