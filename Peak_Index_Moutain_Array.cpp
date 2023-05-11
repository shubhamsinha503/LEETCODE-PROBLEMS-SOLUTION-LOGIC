#include<iostream>
#include<math.h>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int peak(int arr[], int  size){
    int start=0;
    int end = size-1;
    int mid = size + ((end-size)/2);

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start= mid+1;
        }
        else{
            end=mid;
        }
        int mid= size +((end-size)/2);
    }
    return start;
}


int main(){
    int arr[9]={1,2,3,4,53,9,8,7,6};
     int index=peak(arr,9);
    PrintArray(arr,9);
    // cout<<" "<<endl;
     cout<<index<<endl;
}