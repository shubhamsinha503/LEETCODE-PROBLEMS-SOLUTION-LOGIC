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

void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int main(){
    int arr[10]={9,8,7,6,5,4,3,2,1,0};

    PrintArray(arr,10);
    BubbleSort(arr,10);
    PrintArray(arr,10);

}