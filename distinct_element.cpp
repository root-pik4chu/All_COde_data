
#include<iostream>
using namespace std;

int distinct(int A[] , int m){
    int count=0;
    bool isDist = true;

    for(int i=0; i<m; i++){
        isDist = true;

        for(int j=i-1; j >= 0 ; j--){
            if(A[i] == A[j]){
                isDist = false;
                break;
            }
        }
        if(isDist == true)
            count++;
    }   
    return count;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    cout<<distinct(arr,n);
    return 0;
}



