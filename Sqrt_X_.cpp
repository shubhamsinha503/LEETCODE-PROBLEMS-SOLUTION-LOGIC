#include<iostream>
#include<math.h>
using namespace std;

int sqrt(int target){
    int s=0;
    int e=target;
    int mid = s + (e-s)/2 ;
int temp=0;
    while(s<e){
        if(mid * mid >target){
            e=mid-1;
        }
        else if(mid *mid <target){
             temp=mid;
            s=mid+1;
        }
        else{
            return mid;
        }
        mid = s + (e-s)/2 ;
    }
    return temp;
}

int main(){
    int x= sqrt(24);
    cout<<x<<endl;
}