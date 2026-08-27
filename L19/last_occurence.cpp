#include<iostream>
#include<vector>
using namespace std;

int lastOccurence(const vector<int> &arr , int i , int target){
    if(i == -1){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return lastOccurence(arr,i-1,target);
}

int main(){
    vector<int> arr = {1,2,3,3,3,4};
    int index = lastOccurence(arr,arr.size()-1,5);
    cout<<index<<endl;
    return 0;
}