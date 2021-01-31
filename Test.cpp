#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long k, p,n,loop;
	long long a=0,b=0,c,container,m1,m2;
	cin>>loop;
	queue <int> g;
	while(loop--){
	
		cin>>k>>p>>n;
		m1=min(p,k)*n;
		m2=max(p,k)*n;
		container=m2-m1;

		g.push(container);
		cout<<g.front()<<ENDL;
		g.pop();
	}
}
