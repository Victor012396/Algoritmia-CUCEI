#include <bits/stdc++.h>
#define ENDL "\n"

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	float n,a,b,c,equal;
	cin>>n>>a>>b>>c;
	if(a+b+c==n&&a!=0&&b!=0&&c!=0){
		equal=3;
		cout<<equal;
	}
	else if(a+b==n||c+a==n||b+c==n&&a!=0&&b!=0&&c!=0){
		equal=2;
		cout<<equal;
	}else{
			if(a==n||b==n||c==n){
				equal=1;
				cout<<equal;
			}
		}
			
	}

	

