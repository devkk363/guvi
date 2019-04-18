#include<iostream>

using namespace std;

int main(){
    int num,pow1,prod =1;
    
    cin>> num >> pow1;
    
    for(int i=1;i<=pow1;i++)
        prod*=num;
        
    cout<<prod;
    
    
}
