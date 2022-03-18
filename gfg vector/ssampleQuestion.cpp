
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> getSmaller(int arr[] , int n, int k){
    vector<int> result;
    for(int i=0 ; i<n ; i++){
        if(arr[i] < k)
            result.push_back(arr[i]);
    }
    return result;
}

int main(){
    int arr[] = {10,5,30,40,20};
    vector<int> res = getSmaller(arr,5,25);
    for(int x:res){
        cout<<x<<" ";
    }
    return 0;

}



