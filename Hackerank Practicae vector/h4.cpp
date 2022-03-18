

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){

		#ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
         #endif

	int n;//first input
	cin>>n;
	vector<int> v;//vector

	for(int i=0 ; i<n ; i++){
		int temp;

		cin>>temp;
		v.push_back(temp);
	}
///now queries
//
	int q;
	cin>>q;
	int num;
	while(q--){
		cin>>num;
		int r= lower_bound(v.begin(),v.end(),num) - v.begin();
		if(v[r] == num)cout<<"yes"<<r+1<<endl;
		else cout<<"No"<<r+1<<endl;
	}

	cout<<endl;
	cout<<"its working maybeee....."<<endl;
	cout<<"pika p...";

}















