
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
        

    int n;
    cin>>n;
    int input=0;
    vector<int> v;

    for(int i=0 ; i<n ; i++){
        cin>>input;
        v.push_back(input);
    }

    for(int x:v){
        cout<<x<<" ";
            }
}
