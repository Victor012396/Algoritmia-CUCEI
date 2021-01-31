#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){
	int numero;
	int container;
	cin>>numero;
	for(int i=16;i>=0;i--){
		container=pow(2,i);
		if(container<=numero){
			numero-=container;
			cout<<"1";
		}
		else{
			cout<<"0";
		}
		
	}
	//cout<<ENDL<<numero;
}
