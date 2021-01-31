#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	priority_queue <int> pqueue;
	stack <int> organizer;
	int n,value;
	cin>>n;

	while(n--){
		cin>>value;
		pqueue.push(value);
	}
	while(!pqueue.empty()){
		organizer.push(pqueue.top());
		cout<<pqueue.top()<<" ";
		pqueue.pop();
	}
	while(!organizer.empty()){
		
	
			cout<<organizer.top()<<" ";
			organizer.pop();
		}
}
