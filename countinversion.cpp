
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={6, 3, 5 ,2, 7};
    int b[5];
    for(int i=0;i<5;i++){
      b[i]=a[i];
    }
   sort(b, b + 5);
   int count=0;
   for(int i=0;i<5;i++){
   if(a[i]!=b[i]){
    count++;
   }
   }
cout<<"the number of inversions is "<<count-1<<endl;
}