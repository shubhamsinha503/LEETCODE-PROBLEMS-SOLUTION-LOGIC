#include<iostream>
#include <climits>
#include<math.h>
using namespace std;

bool SearchArray(int arr[],int size,int key){

for(int i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
}
return 0;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};

    cout<<"enter the key to be searched" << endl;
    int key;
    cin>>key;

    bool found=SearchArray(arr,10,key);

    if( found ){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }

}