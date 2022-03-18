

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
    int findFrequency(vector<int> v){

    int FNum = 1, temp = 1;
 
    for (int i = 0; i < v.size(); i++) {
            if(v[i] == v[i+1]){
            ++temp;
        }
        else {
            FNum = max(FNum, temp);
            temp = 1;
        }
    }
    FNum = max(FNum, temp);
 
    return FNum;;
}

int main(){

    // #ifndef ONLINE_JUDGE
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    // #endif

    int testcase;
    cin>>testcase;

    while(testcase--){
        int n;
        cin>>n;

        vector<int > v;
        for(int i=0; i< n ;i++){
            int k=0;
            cin>>k;
            v.push_back(k);
        }

        cout<<findFrequency(v)<<endl;
        cout<<"pikaa p its working...";
    }

}



