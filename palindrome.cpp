#include<iostream>

using namespace std;

int main(){
    int n, orgInt, revInt = 0 ,rem;
    
    cin >> n;
    orgInt = n;
    
    while(n!=0){
        rem = n%10; 
        revInt = revInt*10 + rem; 
        n/=10; 
    }
    
    if(orgInt == revInt)
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    
}

