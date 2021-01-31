#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector <string> v;

	map<string,int> m;
	map <pair<string,string>,int> aux;
	string s,t,value;
	int n;
	cin>>n;
	n++;
	while(n--){
		getline(cin,s);

		m[s]++;
	
	}

	cout<<m.size()-1;

}
