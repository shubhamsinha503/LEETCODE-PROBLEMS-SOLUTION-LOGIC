#include<iostream>
#include<math.h>
using namespace std;

void Triplet(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[k]+arr[j]+arr[i]==target){
                    cout<<arr[i]<<" "<<arr[j]<< " " <<arr[k]<<endl;
                }

            }
        }

    }
}
 
void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    Triplet(arr,10,15);
}
