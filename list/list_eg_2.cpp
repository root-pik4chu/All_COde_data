

#include<bits/stdc++.h>
using namespace std;

list<int> l;

void insert( int x){ l.push_back(x) ;}

void print(){
    for(int x:l){
        cout<<x<<" ";
    }
    cout<<endl;
}

void replace(int x , vector<int> &seq){
    auto it = find(l.begin(),l.end() , x);
    if(it == l.end()) 
        return;

    it = l.erase( it);
    l.insert(it,seq.begin() , seq.end());
}


int main(){

    insert(10);
    insert(30);
    insert(5);
    insert(10);
    print();
    vector<int> seq ={1,2,3,4};
    replace(10,seq);
    print();


}


// 
//       {
//             "type": "cppbuild",
//             "label": "C/C++: gcc.exe build active file",
//             "command": "C:\\MinGW\\bin\\gcc.exe",
//             "args": [
//                 "-fdiagnostics-color=always",
//                 "-g",
//                 "${file}",
//                 "-o",
//                 "${fileDirname}\\${fileBasenameNoExtension}.exe"
//             ],
//             "options": {
//                 "cwd": "${fileDirname}"
//             },
//             "problemMatcher": [
//                 "$gcc"
//             ],
//             "group": {
//                 "kind": "build",
//                 "isDefault": true
//             },
//             "detail": "Task generated by Debugger."
//    

