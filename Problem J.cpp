#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int f1=0,f2=1,f3,sum;
	
	for(int i=0;i<n;i++){
		cout<<f1<<f2;
		f2=f1+f2;
		f3=f1+f2;
		f1=f2;
		cout<<f3;
	}
}
