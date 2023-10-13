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

char occurence(char input[]){
    int n=LengthOfString(input);
    int arr[26]={0};
    int number=0;
    for(int i=0;i<n;i++){
        char ch=input[i];
        if(ch>='a'&&ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
int ans;
    int maxi=-1;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }

    char finalans=ans+'a';
    return finalans;
}

int main(){
    char input[8]="shubham";
    cout<< occurence(input)<<endl;
}