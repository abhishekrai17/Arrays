#include<iostream>
using namespace std;
void countsort(int a[],int n){
    int k=a[0];
    for (int i = 0; i < n; i++)

    {
        k=max(a[i],k);
    }
    int count[n]={0};
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=0;i<n;i++){
        output[--count[a[i]]]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<output[i]<<endl;
    }
    
    
}
int main(){
    int arr[]={1,2,3,3,6,6,7,8,7,6};
    int n=10;
    countsort(arr,n);
}