#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
void showstack(stack<int> s)
{
	while(!s.empty()){
		cout<<"\t"<<s.top();
		s.pop();
	}
	cout<<ENDL;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	stack <int> s;
	s.push(1);
	s.push(11);
	s.push(1);
	s.push(5);
	cout<<"The stack is: ";
	showstack(s);
	cout<<"\ns.size() : "<<s.size();
	cout<<"\ns.top() : "<<s.top();
	cout<<"\ns.pop() : ";
	s.pop();
	showstack(s);
}
