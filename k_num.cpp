#include<iostream>

using namespace std;

int main(){
int n,k,num[100], sum =0;

cin>> n>>k;

for(int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

for(int i=0; i<k;i++){
    sum += num[i];
}


    
cout<<sum<<endl;    
}
