#include<bits/stdc++.h>
using namespace std;
int main (){
	int t,sx,sy,ex,ey;
	cin >> t >> sx >> sy >> ex >> ey;
	char a[t];
	for(int i=0;i<t;i++){
		cin >> a[i];
	}
	int i =0;
	bool flag = false;
	for(i=0;i<t;i++){
		if(sx == ex && sy == ey){
			flag = true;
			break;
		}
		if(a[i]=='E' && sx < ex){
			sx = sx + 1;
		}
		else if(a[i]=='S' && sy > ey){
			sy = sy - 1;
		}
		else if(a[i]=='W' && sx > ex){
			sx = sx - 1;
		}
		else if(a[i]=='N' && sy < ey){
			sy = sy + 1;
		}
	}
	if(flag){
		cout << i << endl;
	}
	else{
		if(sx == ex && sy == ey){
			cout << t << endl;
		}
		else{
			cout << -1 << endl;
		}
	}
	return 0;

}