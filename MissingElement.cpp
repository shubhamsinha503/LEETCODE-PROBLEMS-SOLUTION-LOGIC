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

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int MissingElement(int arr[],int k){
    sort(arr,k);
    for(int i=0;i<k;i++){
        if(arr[i]!=i){
            return i;
        }
    }
    return k;
}

int main(){
    int arr[5]={0,2,1,4,5};
    int x= MissingElement(arr,5);
    cout<<x<<endl;
}