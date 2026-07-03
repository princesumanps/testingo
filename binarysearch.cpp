#include<bits/stdc++.h>
using namespace std;
    int binarysearch(vector<int> array,int find){
        int left = 0;
        int right = array.size()-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(array[mid]>find){
                right=mid-1;
            }else if(array[mid]<find){
                left = mid+1;
            }else if(array[mid]==find){
                return 1;
            }
        }
        return 0;
    }
int main(){
    vector<int> array = {1,2,3,4,5,6,7,8,9};
    int find = binarysearch(array,1);
    cout<<find;
return 0;
}