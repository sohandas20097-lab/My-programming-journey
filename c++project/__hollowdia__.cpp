#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of rows:";
    cin>>n;
   int c=1; 
    //upper half
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        if (i==0){
            cout<<"*\n";
        }
        else{
                cout<<"*"<<string(c,' ')<<"*";
                c+=2;
                cout<<endl;}
    }
    //lower half
     c-=4;
    for(int i=0;i<n-1;i++){
       
        for(int j=1;j<i+2;j++){
            cout<<" ";
        }
        if (i==n-2){
            cout<<"*\n";
        }
        else{
                cout<<"*"<<string(c,' ')<<"*";
                c-=2;
                cout<<endl;}
    }
    return 0;
}  
