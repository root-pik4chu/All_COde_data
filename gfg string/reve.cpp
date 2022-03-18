
#include<iostream>
using namespace std;


int main(){
    string s;
    cin>>s;

    string  temp="";

    int len = s.length()-1;

    while(len >= 0){
        temp = temp +s[len];
        len--;
    }
    cout<<temp;

}

