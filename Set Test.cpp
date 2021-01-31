#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//set <int,greater<int>> s;
		set <int> s;
	int i,x;
	for(i=0;i<10;i++){
		cin>>x;
		s.insert(x);
	}
	for(auto e:s)
		cout<<e<<" ";
}
