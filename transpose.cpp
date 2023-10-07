#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    int temp;
   
    cout<<"Enter the array elements"<<endl;
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0;i<4;i++){
        for (int j=i;j<4;j++){
            temp =arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"Printing the array elements"<<endl;
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<endl;
        }cout<<"\n";
    }
}