#include<iostream>
#include<math.h>
using namespace std;
 
void printarray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 

void SelectionSort(int arr[],int size){
    for(int i=0;i<size;i++){
       int minvalue=i;
       for(int j=i+1;j<size;j++){
        if(arr[j] < arr[minvalue]){
            minvalue=j;
        }
       }
       swap(arr[minvalue],arr[i]);
    }
}

int main(){
    int arr[5]={7,21,13,42,5};
    printarray(arr,5);
    SelectionSort(arr,5);
    printarray(arr,5);
}