
#include<bits/stdc++.h>
using namespace std;

int BinaryToInterger(string s){

    int base =1;
    int ans = 0;

    int size = s.length();

    for(int i = size-1; i>= 0 ; i--){
        ans = ans+((int)(s[i] - '0')*base);
        base = base * 2;
    }
    cout<<ans;
}
int main()
{   
    string s;
    cin>>s;
    BinaryToInterger(s);
    return 0;
} 

