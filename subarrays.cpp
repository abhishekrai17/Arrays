#include<iostream>
using namespace std;
int main(){
    int arr[5]={-4,5,8,7,6};
    
  
for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
       for(int k=i;k<j;k++){
            cout<<arr[k];
        }cout<<endl;
    }
}

}