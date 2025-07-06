#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,1,5,2,3};
    for(int i=0;i<4;i++){// i<n-1
        for(int j=0;j<5-i-1;j++){   // n-i-1
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}