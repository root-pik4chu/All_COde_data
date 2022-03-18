//binary search
#include<iostream>
using namespace std;
int main(){


    int a[10] = {10,5,6,7,3,4,2,8,9,1} ;
    int counter = 1;
    while (counter < 10)
    {
        for(int i = 0 ; i < 10-counter ; i++){
            
            if (a[i] > a[i+1]){

                int temp = a[i];
                a[i] = a[i+1]; 
                a[i+1] = temp;
            }
        }
        counter ++;
    }
    
    for(int i = 0 ; i < 10 ; i++){
        cout<<a[i]<<" ";
    }
}



