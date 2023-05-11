#include<iostream>
#include<math.h>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort(int arr[],int size){
   int i=0;
   int j=size-1;
while(i<j){
    while(arr[i]==0 && i<j){
        i++;
    }
    while(arr[j]==1 && i<j){
        j--;
    }
    if(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }
}
for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[5]={0,1,0,1,1};
    sort(arr,5);
    
}