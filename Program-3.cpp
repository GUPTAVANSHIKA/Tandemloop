#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a;
    if(a%2!=0){
        for(int i=1;i<=a;i++){
           
            cout<<2*i-1<<" ";
        }
    }
    else{
        for(int i=1;i<a;i++){
            
            cout<<2*i-1<<" ";
        }
    }
    
    return 0;
}
