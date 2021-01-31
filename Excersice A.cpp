#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	cin.tie(0);
	cout.tie(0);
	priority_queue <int,vector<int>,greater<int>> pqueue;
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
	
}

