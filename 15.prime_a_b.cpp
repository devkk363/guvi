#include<iostream>

using namespace std;

int main(){
    
    int num1,num2, flag;
    
    cin>>num1>>num2;
    
    while(num1<num2){
        flag = 0;
        
        for(int i=2; i<= num1/2;i++){
            if( num1%i == 0){
                flag = 1;
                break;
            }
            
        }
        if(num1>1 && flag == 0)
            cout << num1 << " ";
        
        num1++;
        
    }
}
