

//this is  for max 
// #include<iostream>
// using namespace std;
// int main(){
//     int a[5] = {2,5,6,3,1};
//     int max = a[0];
//     for(auto x:a){
//         if( x > max){
//         
//             max = x;
//         }
//     }
//     cout<<max;
// }

// this is for min....
#include<iostream>
using namespace std;
int main(){
    int a[5] = {2,5,6,3,1};
    int min = a[0];
    for(auto x:a){
        if( x < min){
        
            min = x;
        }
    }
    cout<<min;
}

