#include<iostream>
using namespace std;
int main(){
    int arr[6]={5,-4,-8,6,-4,5};
   int mx=INT16_MIN;
    int key=18;
    for(int i=0;i<6;i++){ 
        int sum=0;
        for(int j=i;j<6;j++){
            sum+=arr[j];
            mx=max(sum,mx);
           
            }
        }
        cout<<"the maximum sum = "<<mx<<endl;
    
}