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

bool Duplicate(int arr[],int k){
    sort(arr,k);
    for(int i=1;i<k;i++){
        if(arr[i]==arr[i-1]){
            return true ;
        }
    }
    return false;

}

int main(){
    int arr[4]={1,2,3,1};
    cout<< Duplicate(arr,4)<<endl;
}