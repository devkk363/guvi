#include<iostream>

using namespace std;

int main(){
    
    char str;
    
    cin>>str;
    
    if(str >= 'A' && str <= 'Z' ||str >= 'a' && str <= 'z'){
        cout<<"Alphabet"<<endl;
    }
    else
        cout<<"no"<<endl;
}
