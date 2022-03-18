

#include<iostream>
using namespace std;
int main(){

    int a[10] ,number ;
    //cout <<"number = ";
    cin >> number;
    for(int i = 0 ; i < number ; i++){
        cout<<i+1<<" number is ";
        cin >> a[i] ;
    }

    cout << "enter index = ";
    int index;
    cin>> index;

    for(int i = 0 ; i < number ; i++){
        if(index == a[i]){
            cout<<"found at index "<<i+1;
            return 0;
        }
    }
    cout<<"not found ";
    
}