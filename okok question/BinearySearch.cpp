

//binary search
//binary search
#include<iostream>
using namespace std;
int main(){

    int n,mid,key;
    cout<<"enter the array length = ";
    // length of aarray
    cin >> n;
    int a[n];
    
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
// this is for printing array 
    cout<<"your entred numbers are "<<endl;
    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
    cout<<" enter number to find in array = ";
    cin>> key;
    cout<<"_____________________________"<<endl;

    int lower = a[0];
    int high = n-1;
    //algo
    while(lower <= high)
    {
        mid = (lower + high)/2;
        if(key == a[mid]){
            cout<<"found at "<<mid+1;
            return 0 ;
        }
        else if ( key < a[mid]){
            high = mid - 1;
        }
        else{
            lower = mid + 1 ;
        }
    }
    cout<<"not found ";

}




/*
Data Structures in cpp


arrays 
structure
pointer
reference in c++
practice
practice pointer 
function
parameter passing in function
parameter passing in structure
oop 
class and constructor
templete class
stack
queue
tree
graph
hashing
recussion


*/










