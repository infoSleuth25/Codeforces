#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,k;
	cin >> n >> k;
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v[i][0] = a;
		v[i][1] = b;
	}
	sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
        if(a[0] != b[0])
            return a[0] > b[0]; 
        else
            return a[1] < b[1];
    });
    int first = v[k-1][0];
    int second = v[k-1][1];
    int count = 0;
    for(int i=0;i<n;i++){
    	if(v[i][0] == first && v[i][1] == second){
    		count++;
    	}
    }
    // cout << jodsolp;
    cout << count << endl;
    return 0;
}