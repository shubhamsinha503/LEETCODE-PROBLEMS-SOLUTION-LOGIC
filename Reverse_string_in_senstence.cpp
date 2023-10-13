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

char occurence(string s){
    int arr[26]={0};

    for(int i=0;i<s.length();i++){
        int number=0;
        char ch=s[i];
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
    string s="shaaaaaaaaaaaaaaaaaaaaaas";
    cout<< occurence(s)<<endl;
}
