#include<iostream>

using namespace std;

int main(){
    int num ,prod =1;
    
    cin >> num;
    
    for(int i =1;i<=num ;i++ ){
        prod *=i;
    }
    cout<<prod;
}
