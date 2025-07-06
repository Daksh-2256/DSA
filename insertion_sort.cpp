#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,1,5,2,3};
    for(int i=1;i<5;i++){
        int cur=arr[i];
        int prev=i-1;
        while(prev>=0&&arr[prev]>cur){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=cur;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}