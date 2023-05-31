#include<iostream>
#include<math.h>
using namespace std;

 bool Ispossible(int arr[] , int n ,int m ,int mid){
int studentcount=1;
int pagesum=0;
for( int i=0;i<n;i++){
if(arr[i] >mid){
return false;
}
if(pagesum+ arr[i] > mid){
    studentcount++;
    pagesum = arr[i];
    if(studentcount > m ){
        return false;
    }

}
else{
    pagesum+=arr[i];
}

}
return true;
}

int Allocation(int arr[], int n,int m){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int s=0;
    int e=sum;
    int ans= INT32_MAX ;
    int mid= s + (e-s)/2 ;
    while(s<=e){
        int mid= s + (e-s)/2 ;
        if(Ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        } 
    }
    return ans;
}

int main(){


int arr[4]={12,34,67,90};
int result = Allocation(arr,4,2);
cout<<result<<endl;

}