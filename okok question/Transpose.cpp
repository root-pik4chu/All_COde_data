
#include<iostream>
using namespace std;
int main(){
    int A , B;
    cout<<"enter the column length - ";
    cin>>A;
    cout<<"enter the row - ";
    cin>>B;
    int a[A][B] , b[A][B];


    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
            cin>>a[i][j];
        }
    }
    cout<<"your entred martix "<<endl;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
        
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    }
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
            b[j][i] = a[i][j];
        }
    }
    cout<<"transpose of matrix "<<endl;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j <3 ; j++){
        
            cout<<b[i][j] <<" ";
        }
        cout<<endl;
    }
    return 0;
}

//  enter the column length - 3
// enter the row - 3
// 1 2 3 4 5 6 7 8 9
// your entred martix 
// 1 2 3
// 4 5 6
// 7 8 9
// transpose of matrix
// 1 4 7
// 2 5 8 
// 3 6 9           

