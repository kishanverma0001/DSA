#include<iostream>
using namespace std;

int trapped_rainwater(int * height,int n){
    int left_max[10000];
    // left_max[0] = INT_MIN;
    left_max[0] = height[0];
    for(int i = 1;i<n;i++){
        left_max[i] = max(left_max[i-1],height[i-1]);
        // cout<<left_max[i]<<",";
    }
    // cout<<endl;

    int right_max[20000];
     right_max[n-1] = height[n-1];
    // right_max[n-1] = INT_MIN;
    for(int i = n-2;i>=0;i--){
        right_max[i] = max(right_max[i+1],height[i+1]);
        // cout<<right_max[i]<<",";
    }
    // cout<<endl;

    int waterTrapped = 0;
    for(int i = 0;i<n;i++){
       int currWter = min(left_max[i],right_max[i]) - height[i];
       if(currWter > 0){
        waterTrapped += currWter;
       }
    }
    // cout<<"Trapped water = "<<waterTrapped<<endl;
    return waterTrapped;
}

int main(){
    int height[] = {4, 0, 2, 6, 3, 2, 5};
    int n = sizeof(height) / sizeof(int);
    cout<<trapped_rainwater(height,n)<<endl;
    return 0;
}