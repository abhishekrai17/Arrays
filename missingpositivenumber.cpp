#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,8,-6,1};
    int check[5]={0};
    for(int i=0;i<5;i++){
        if(arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    for(int j=0;j<5;j++){
        if(check[j]==0){
            cout<<j+1<<endl;
            return 0;
        }
    }
}