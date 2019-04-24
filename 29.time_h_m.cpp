#include<iostream>

using namespace std;

int main(){
    
    int num,h,m;
    
    cin>>num ; //52;
    if(num<0) cout<<"Not a vaild number "; return -1;
    if(num!=0){
            h = num/60;
            m = num%60;    
    }
    
    cout<<h<<":"<<m;
}
