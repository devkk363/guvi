#include<iostream>

using namespace std;

int main(){
    int n,a=-1000,b;
    
    cin >> n;
    int i =1;
    while(i <= n){
        
        cin >> b;
        
        if(b>a)
            a = b;
        i++;   
    }
    
    cout<<a;
}
