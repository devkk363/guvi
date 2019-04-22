#include<iostream>

using namespace std;

int main(){
    int S,n,a,d;
    
    cin >> n >> a>> d;
    
        
     for (int i=0;i<n;i++) 
    { 
        S = S + a; 
        a = a + d; 
    } 
    cout<<S;
    return 0;
}
