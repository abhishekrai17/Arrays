#include<iostream>
#include<strings.h>
using  namespace std;
int main(){
    // string str;
    //  getline(cin,str);
    //  cout<<str<<endl;

    // string ptr(5,'n');
    // cout<<ptr;

    // string str="abhishek ",s2=" kumar";
    // str.append(s2);
    // cout<<str<<endl;

    // s1.compare(s2);
    //s1.erase(3,3); first no is starting index and second is no of characters
    //s1.find("com"); returns starting index
    //s1.insert(2,"lol"); insert at index 2
    
 string str,s1,s2,s3,s4;
 cout<<" ENTER THE STRING"<<endl;
 getline(cin,str);
 int len =str.length();
cout<<"the length of string is "<<len<<endl;
int c= len/4;
  for(int i=0;i<len;i=i+2)
    {
        if(i==0 ){
            s1=str.substr(i,c);
          cout<<s1;
          
        }
         else if(i==2){
            s2=str.substr(i,c);
            //  cout<<s2<<endl;
           
        }
        else if(i==4){
            s3=str.substr(i,c);
           
        }
         else if(i==6){
            s4=str.substr(i,c);
            // cout<<s4<<endl;
        }
    }
}