


#include<iostream>
using namespace std;

int main()
// {
//     int a[5];
// 
//     for(int i = 0 ; i < 5 ; i++){
//         cout<<a[i]<<endl;
//     }
// }
//
 /*
-2        
6422280   
1972203309
4200960   
6422352 

it print only the garbage value cause of not initilise the array 

*/

// 
// {
//         int a[5] = {3,4,5,6,7};
// 
//     for(int i = 0 ; i < 5 ; i++){
//         cout<<a[i]<<endl;
//     }
// }
// output
// 3
// 4
// 5
// 6
// 7

{
        float a[10] = {3,4,5,6,7,3.5f , 5.4f};

    for(auto x:a){
        cout<<x<<endl;
    }
}





