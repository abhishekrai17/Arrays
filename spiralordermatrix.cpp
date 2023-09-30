#include<iostream>
using namespace std;
int main(){
    int arr[4][4];
    cout<<"Enter the array elements"<<endl;
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Printing the array elements"<<endl;
    // for(int i =0;i<4;i++){
    //     for(int j=0;j<4;j++){
    //         cout<<arr[i][j]<<endl;
    //     }
    // }
    int rows=0,rowe=3,columne=3,columns=0;
    while(rows<rowe && columns<columne)
    {
         
         for (int j=columns;j<=columne;j++){
            cout<<arr[rows][j];
         }
         rows++;
         cout<<"\n";
         
         for (int i=rows;i<=rowe;i++){
            cout<<arr[i][columne];
         }
         cout<<"\n";
         columne--;
          
         
         for (int j=columne;j>=columns;j--){
            cout<<arr[rowe][j];
         }
         rowe--;
         cout<<"\n";

         for (int i=rowe;i>=rows;i--){
            cout<<arr[i][columne];
         }
         cout<<"\n";
         columns++;
    }

    
    }
