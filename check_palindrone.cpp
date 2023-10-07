#include<iostream>
#include<string.h>
using namespace std;

int LengthOfString(char arr[]){
    int i=0;
    while(arr[i] != '\0'){
        i++;
    }
    return i;
}

void Printarray(char arr[]){
    int n=LengthOfString(arr);
    for(int i=0;i<n;i++){
        cout<< arr[i] ;
    }
    cout<<endl;
}

bool IsPallindrone(char name[]){
    int s=0;
    int n = LengthOfString(name)-1;
   while(n>s){
    if(name[s]==name[n]){
        s++;
        n--;
        continue;
    }
    else{
        return false;
    }
   }
   return true;

}

int main(){
    char name[8]="shubham";
    cout<< IsPallindrone(name);
}



