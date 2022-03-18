


#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//here always use &"amphersand" cause vector are pass by value always hence we have to pass referance to it....
void fun(vector<int> &v){
    v.push_back(30);
    v.push_back(40);
}

int main(){

    vector<int> v{1,2,3};
    fun(v);
    for(int x:v){
        cout<<x<<" ";
    }




}





