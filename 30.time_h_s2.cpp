#include<iostream>

using namespace std;

int main(){
    
    int h1,m1,h2,m2,h,m;
    
    cin>>h1 >>m1>>h2>>m2;
    
    if(h1<0 || h2 <0 || m1 <0 || m2 <0) return -1;
    
    
    h = (h1>h2? h1-h2:h2-h1);
    m = (m1>m2? m1-m2:m2-m1);
    
    cout<<h<<" "<<m;
}
