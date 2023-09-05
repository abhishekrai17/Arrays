#include<iostream>
using namespace std;
int main(){
    int arr[]={-1,0,1,2,-1,-4};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<6;k++){
                if((arr[i]+arr[j]+arr[k])==0){
                    cout<<" the numbers are "<<"[ "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" ]"<<endl;
                }
            }
        }
    }
}