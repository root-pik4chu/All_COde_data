
#include<iostream>
using namespace std;
void fun(int *arr){

    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" "<<"\n";
        cout<<sizeof(arr)<<" "<<sizeof(arr[0]);
    }
}
int main(){
    int arr[]={10,20,30,40};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
        //

    }
     cout<<endl;
    cout<<sizeof(arr)<<"\n";
    cout<<sizeof(arr[0]);
    cout<<endl;


//     cout<<"\n";
    fun(arr);
}



