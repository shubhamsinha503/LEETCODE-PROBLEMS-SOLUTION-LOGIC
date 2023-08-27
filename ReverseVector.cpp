#include<iostream>
#include <climits>
#include<math.h>
#include<vector>
using namespace std;

void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void ReverseVector(vector<int> v, int m){
    int s=m;
    int e=v.size()-1;
    while(e>s){
        swap(v[s],v[e]);
        s++;
        e --;
    }
    return v;
}

int main(){
    vector<int> v;

    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    printVector(v);
    vector<int> ans = ReverseVector(v);
    printVector(ans);
}