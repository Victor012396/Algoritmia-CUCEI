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
	int piles=0;
	for(int i=0;i<n;i++){
		cin>>box[i];
		if (box[i]==0)
			piles++;
	}
	cout<<piles;
}
