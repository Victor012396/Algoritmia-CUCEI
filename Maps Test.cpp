#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//set <int,greater<int>> s;
	map <int,string> m;
	int i,x;
	m.insert(pair<int, string>(1, "Victor Velasco")); 
	m.insert(pair<int, string>(0, "Cy Ja")); 
	 cout << "m.lower_bound(1) : "
         << "\tKEY = "; 
    cout << m.lower_bound(0)->first << '\t'; 
    cout << "\tELEMENT = "
         << m.lower_bound(0)->second << endl; 
    cout << "m.upper_bound(1) : ";
}
