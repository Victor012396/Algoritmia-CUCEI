#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <int> surprise{
	1,2,3,4,5
	};
	 auto it = surprise.insert(surprise.begin(), 3); 

	for(int x: surprise)
		cout<<x<<ENDL;
	int n=surprise.size();
	cout<<"Size of the vector is: "<<n;
	
	
}
