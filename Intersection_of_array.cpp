#include<iostream>
#include <climits>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;

void printVector(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> intersection(vector<int>& nums1,vector<int>& nums2){
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    int i=0,j=0;
    int n=nums1.size();
    int m=nums2.size();
    int las=-1;
    vector<int> v;

while(i<n && j<m){
        if(nums1[i]==nums2[j] ){
            if( las!=nums1[i]){   
            v.push_back(nums1[i]);
            las=nums1[i];
            }
            i++;
            j++; 
        }else if(nums1[i]>nums2[j]){
            j++;
        }else {
            i++;
        }
        }

        return v;
}

int main(){
    vector<int> nums1;
    vector<int>nums2;
    nums1.push_back(1);
    nums1.push_back(3);
    nums1.push_back(5);
    nums2.push_back(3);
    nums2.push_back(5);
    nums2.push_back(7);

    vector<int > ans;
    ans=intersection(nums1,nums2);
    printVector(ans);
}