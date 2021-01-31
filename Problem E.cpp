#include <bits/stdc++.h>
#define ENDL "\n"
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int d,sumTime;
	int minTime[31], maxTime[31];
	int min=0,max=0;
	cin>>d>>sumTime;
	for(int i=0;i<d;i++){
		cin>>minTime[i]>>maxTime[i];
		min+=minTime[i];
		max+=maxTime[i];
	}
	if(min>sumTime||max<sumTime)
		cout<<"NO";
	else{
		cout<<"YES"<<ENDL;
		int average=sumTime-min;
		int i=0;
		while(i!=d){
			if(average==0)
				cout<<minTime[i]<<" ";
			else if(average<=maxTime[i]-minTime[i]){
				cout<<minTime[i]+average<<" ";
				average=0;
			}else{
				cout<<maxTime[i]<<" ";
				average-=maxTime[i]-minTime[i];
			}
			i++;
		}
	}
}
