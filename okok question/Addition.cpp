


#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"enter the rows -";
    cin>>a;
    cout<<"enter the col -";
    cin>>b;

    int A[a][b], B[a][b],C[a][b];

    cout<<"enter the first matrix"<<endl;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            cout<<"A ("<<i<<j<<") ";
            cin>>A[i][j];
           
        }
    }
    
    cout<<"enter the second matrix"<<endl;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            cout<<"B ("<<i<<j<<") ";
            cin>>B[i][j];
        }
    }

    cout<<"its first matrix"<<endl;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"__________"<<endl;
    cout<<"this is second"<<endl;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"this is after Addition"<<endl;
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            C[i][j] = A[i][j] + B[i][j]; 
        }
    }
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}


