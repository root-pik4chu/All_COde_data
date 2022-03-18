
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

        
        
    vector<int> v ={10,20,30,40,50};
    vector<int> :: iterator i =v.begin();
    int a;
    cin>>a;
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i= v.end();
    i--; 
    cout<<(*i)<<" ";
    cout<<a;

    
}
