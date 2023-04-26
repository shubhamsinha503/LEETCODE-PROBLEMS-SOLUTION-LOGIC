#include<iostream>
#include<math.h>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int Duplicate(int arr[],int size){
    int ans=0;
for(int i=0;i<size;i++){
ans=ans^arr[i];
}
for(int i=1;i<size;i++){
    ans=ans^i;
}

return ans;

}

int main(){

int arr[10]={1,2,3,4,5,6,7,8,9,1};
PrintArray(arr,10);
int ans=Duplicate(arr,10);
cout<<ans<<endl;



}