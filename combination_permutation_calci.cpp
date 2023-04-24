#include<iostream>
#include<math.h>
using namespace std;

int factorial(int num){
    if(num==1){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }

}

int ncr(int n , int r){
return  factorial(n)/(factorial(r)*(factorial(n-r)));
}

int main(){

int num2=ncr(8,4);
cout<<num2<<endl;
}