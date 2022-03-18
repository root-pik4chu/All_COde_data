
#include<iostream>
using namespace std;
int main(){


    string str="pikachu";
    cout<<str.length()<<endl;
    str = str+"lol";
    cout<<str<<endl;
    cout<<str.substr(1,4)<<endl;
    cout<<str.find("i");

    return 0;

}

