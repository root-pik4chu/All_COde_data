

#include<bits/stdc++.h>

using namespace std;
int main(){

    int arr[] ={1,2,3,4,5};
    
    int n= sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr,arr+n);

    for(auto it=v.rbegin() ; it != v.rend() ; it++){
        cout<<(*it)<<" ";
    }

}

