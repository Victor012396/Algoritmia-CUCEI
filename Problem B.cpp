#include <bits/stdc++.h>
#define ENDL '\n'
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int box[n];
	for(int i=1;i<=n;i++)
	{
		int friends;
		cin>>friends;
		box[friends]=i;
		
	}
	
	for(int i=1;i<=n;i++){
		cout<<box[i]<<" ";
		
	}
}
