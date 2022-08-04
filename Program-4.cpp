#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int i;
    for(int i=1;i<=9;i++){
        for(int j=0;j<n;j++){
            if(arr[j]%i==0){
                count++;
            }
        }
         cout<<i<<":"<<count<<" ";
         count=0;
    }
    return 0;
}
