
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int start =0;
    int  end = s.length() - 1;

    while(start < end){
        if(s[start] != s[end]){
            cout<<"not a palindrom";
            return 0;
        }
        start++;
        end --;
    }cout<<"palindrom ";
    return 0;
}


