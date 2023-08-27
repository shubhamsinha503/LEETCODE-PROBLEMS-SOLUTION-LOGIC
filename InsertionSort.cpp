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

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j;
        int temp=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main(){
    int arr[10]={9,8,7,6,5,4,3,2,1,0};
    PrintArray(arr,10);
    InsertionSort(arr,10);
    PrintArray(arr,10);
}