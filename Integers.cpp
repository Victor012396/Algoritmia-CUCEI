#include <bits/stdc++.h>
#define ENDL \n
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	queue <int> XD;
	int n,n1,n2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>n1>>n2;
		if((((n1%2)+(n2%2))==0)||(((n1%2)+(n2%2))==2)){
				XD.push(1);	
		}else{
			XD.push(0);
		}
	}
	while(!XD.empty()){
		if(XD.front()==1){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

		XD.pop();
	}
}
