

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int Cmp( pair<int , int>p1 , pair<int , int>p2){
    return p1.second > p2.second;
}


void PrintSortByMarks(int Rno[] ,int marks[] , int n ){
    vector<pair<int,int>> v;

    for(int i=0 ; i<n ; i++){
        v.push_back( { Rno[i] , marks[i] } );
    }

    sort(v.begin() ,v.end(), Cmp);
    for(int i=0 ; i<n ; i++){
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }
}

int main(){

    int marks[] ={90,50,70,60};
    int Rno[] ={101,105 , 107,106};

    PrintSortByMarks(Rno,marks,4);



}


