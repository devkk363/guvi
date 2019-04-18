#include<iostream>

using namespace std;

int main(){
    int num, flag =1;
    
    cin>> num;
    
    
    for(int i=2;i<num/2; i++){
        if(num%i ==0){
            flag = 0;
            break;
        }
    }
    
    if(flag == 1)
        cout<<"yes";
    else 
        cout<<"no";
    
}
