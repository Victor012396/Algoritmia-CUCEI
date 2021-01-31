#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int next=n;
	int next2;
	int matrix[n];
	for(int i=n;i>0;i--){
		if(next%i==0&&i==n)
				cout<<i<<" ";
		else if(next%i==0){
			cout<<i<<" ";
			next=i;
		}

		
			

	}
}
