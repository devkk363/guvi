#include<iostream>

using namespace std;

int main(){
    int num, rem,org, prod = 0;
    cin >> num;
    
    org = num;
    while(num!=0){
        rem = num%10;
        prod = prod + rem*rem*rem;
        num = num/10;
        
    }
    
    if(org == prod)
        cout<<"yes";
    else
        cout<<"no";
    
    
    
    
}
