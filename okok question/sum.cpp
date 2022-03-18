

#include<iostream>
using namespace std;

int main(){


    int a[6] = {2,1,3,4,5,3};

    int sum = 0 ;
    for(int i = 0 ; i < 6 ; i++){
        sum = sum + a[i];
    }
    cout<<sum;
}



