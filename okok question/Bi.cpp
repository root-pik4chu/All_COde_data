//binary search
#include<iostream>
using namespace std;
int main(){

    int  x =0  ,y = 0 ,i ,j;
    int a[3][3] = {{1,0,1},{0,1,0},{1,0,1}};

    for(int i = 0 ; i<= 2 ;i++){
        for(j = 0 ; j<= 2 ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i = 0; i <= 2 ; i++){
        for(int j = 0 ; j <= 2 ; j++){

            if(i == j  && a[i][j] == 1 ||  i+j == 2 )
                x++;
            
            if( i != j && a[i][j] == 0)
                y++;
                
        }
    }
    if(x == 5 && y == 4){
        cout<<"identity matix found"<<endl;
    }
    else{
        cout<<" matrix not found "<<endl;
    }
}

// 1 0 1 
// 0 1 0
// 1 0 1

// identity matix found

// achalpur - tahsil road - petrol pump chya baju ne


