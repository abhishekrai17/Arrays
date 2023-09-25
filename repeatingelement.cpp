#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,2,4,2,4};
     int count=0;
     
     for(int i=0;i<5;i++){
        for (int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                cout<<"the index is "<<i+1<<endl;
                count++;
                return 0;
            }
        }
     }
     if(count==0){
        cout<<"no number is repeating"<<endl;
     }
}