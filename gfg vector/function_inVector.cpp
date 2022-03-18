
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v{1,2,3,4,5};

    auto it= v.insert(v.begin() ,100);
    //[100,1,2,3,4,5]

    v.insert(v.begin()+2,200);
    //[100,1,200,2,3,4,5]

    v.insert(v.begin(),2,300);
    //[300,300,100,1,200,2,3,4,5]

    vector<int> v2;
    v2.insert(v2.begin() , v.begin() ,v.begin()+2) ;
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int y:v2){
        cout<<y<<" ";

    }



}

