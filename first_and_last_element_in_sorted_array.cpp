#include<iostream>
#include<math.h>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int FirstOcc(int arr[],int size,int target){
    int start=0;
    int end= size -1;
    int mid=start +((end-start)/2);
int temp=-1;
    while(start <=end){
        if(arr[mid]==target){
             temp=mid;
             end=mid-1;
        }
        if(target>arr[mid]){
            start= mid+1;
        }
        if(target < arr[mid]){
            end=mid-1;
        }

 mid=start +((end-start)/2);
    }
    return temp;

}
int LastOcc(int arr[],int size,int target){
    int start=0;
    int end= size -1;
    int mid=start +((end-start)/2);
int temp=-1;
    while(start <=end){
        if(arr[mid]==target){
             temp=mid;
             start=mid+1;
        }
        if(target>arr[mid]){
            start= mid+1;
        }
        if(target < arr[mid]){
            end=mid-1;
        }

 mid=start +((end-start)/2);
    }
    return temp;

}
int main(){
    int arr[5]={1,2,3,3,5};
    int arr1[6]={1,2,2,3,5,6};

    int index=FirstOcc(arr,5,3);
    int index_1=LastOcc(arr1,5,3);

    cout<< index <<" "<<index_1<<" "<<endl;


}