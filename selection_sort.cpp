#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,1,5,2,3};
    
    for(int i=0;i<4;i++){
        int si=i;

        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[si]){
                si=j;

            }
        }
         swap(arr[i],arr[si]);
         
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}