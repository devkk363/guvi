#include<iostream>

using namespace std;

int main(){
    int num1,num2, rem,org, prod = 0,temp;
    cin >> num1 >> num2;
    
    for(int num=num1;num<=num2;num++){
         temp=num;
         prod = 0;

         while(temp!=0){
             rem=temp % 10;
             temp=temp/10;
             prod=prod+(rem*rem*rem);
         }
         if(prod==num)
             cout<<num << " " ; 
    }

    
    
    
}
