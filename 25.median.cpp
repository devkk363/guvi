#include<iostream>

using namespace std;


int main(){
    int a[100],n,i;
    
    cin >> n;
    
    for(i = 0;i < n; i++){
        cin >>a[i];
    }
    
    int median = a[n/2];
    cout<<median;
    
    
    
}
