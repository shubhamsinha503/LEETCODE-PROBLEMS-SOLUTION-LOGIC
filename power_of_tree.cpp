#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;

int sum=0;
    for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(n==ans){
           sum=sum+2;
        }
    }
    if(sum==2){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    

}