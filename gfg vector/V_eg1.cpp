

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int i=0 ; i< v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<v.size();

    //also use for each loop
    cout<<endl;
    vector<int> v1{1,2,3,4,5};
    for(int x:v1){
        
        cout<<x<<" ";
    }

    cout<<endl;
    //copy of vector 
    //all the elements are copied...

    for(int &x:v1){
        x=6;
        cout<<x<<" ";
    }

// best way ro write a vector cause here we have to write less 
// line if code okayyyyy......
    cout<<endl;
    vector <int > v3{1,2,3,4};
    
    for(int y:v3){
        cout<<y<<" ";
    }

}

