

#include<iostream>
using namespace std;

int main(){
    int a[5] = {4,6,7,8,2} ;
    
    int max = a[0] ;
    
    for(int i = 1 ; i < 5 ; i++){
       
        if (a[i] > max){
            max = a[i];
        }
    }
    cout<<max;
    return 0;
}


