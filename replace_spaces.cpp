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

void valid(string str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }

    cout<<temp<<endl;
}

int main(){
    string str="shubham is aboy";
    valid(str);
}
