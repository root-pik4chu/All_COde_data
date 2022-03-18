
#include<iostream>
using namespace std;
int main(){
    string str = "pikachu";
    int  search = str.find("ka");

    if(search  == string::npos){
        cout<<"not present"<<"\n";
    }
    else{
        cout<<"present at the index "<<search;
        
    }
}
//if the string  is present then it will give a firest indez 
//occurance and 
// if the strintg is not present then the find function return the string::npos 
// hence we are checking the npos present or not 


