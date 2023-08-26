#include<iostream>
#include <climits>
#include<math.h>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;
}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int MinIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[MinIndex]){
                MinIndex=j;
            }
        }    
        swap(arr[MinIndex],arr[i]);
        }
}

int main(){

    int arr[9]={9,8,7,6,5,4,3,2,1};
    PrintArray(arr,9);
    selectionsort(arr,9);
    PrintArray(arr,9);
}