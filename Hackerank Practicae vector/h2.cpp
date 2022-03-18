


#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    vector<int> v;
    v={1,2,3,4,5,6};

    v.erase(v.begin()+1);

    for(int x:v){
        cout<<x<<" ";
    }

    v.erase(v.begin()+1 , v.begin()+3);
    cout<<endl;
    for(int x:v){
        cout<<x<<" ";
    }

    int n;
    cin>>n;
    int temp;

    for(int i=0 ; i< n ; i++){
        cin>>temp;
        v.push_back(temp);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b);
    
    cout<<v.size()<<endl;

    for(int x:v){
        cout<<x<<" ";

            
    }

}
