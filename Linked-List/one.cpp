#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int count=0;
    cin>>n;
    bool check=false;
    int sid[n];
    int stime[n];
    for(int i=0;i<n;i++){
        cin>>sid[i]>>stime[i];
       
    }
   
   
    for(int i=0;i<n-1;i++){
        for(int j=0;i<n-i-1;j++){
            int temp,temp2;
            if(stime[j]>stime[j+1])
            {

            temp2=stime[j];
            stime[j]=stime[j+1];
            stime[j+1]=temp2;

            temp=sid[j];
            sid[j]=sid[j+1];
            sid[j+1]=temp;
           
            
           
            count++;
            check=true;  
            }
           
           
        }
        if(check==false){
            break;
        }
    }
   
    for(int i=0;i<n;i++){
        cout<<sid[i]<<" "<<stime[i]<<endl;
    }
    cout<<sid[0]<<" "<<sid[1]<<endl;
      return 0;
}
