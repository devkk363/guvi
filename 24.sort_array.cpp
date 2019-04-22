#include<iostream>

using namespace std;

void sort(int *arr, int size){
    int i, temp,j;

    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int a[100],n,i;
    
    cin >> n;
    
    for(i = 0;i < n; i++){
        cin >>a[i];
    }
    
    
    sort(a,n);
    for(i = 0;i < n; i++){
        cout<<a[i]<<" ";
    }
}
