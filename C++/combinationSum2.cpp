#include<iostream>
#include<vector>
using namespace std;

void combinationSum2(int ind, int target, vector<int>& arr, vector<int> &ds){
        if(target==0){
            for(auto it : ds){
                cout<<it<<" ";
            }
            cout<<endl; 
            return;      
        }
          
        //Picking same element 
        for(int i=ind;i<=arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;

            ds.push_back(arr[i]); 
            combinationSum2(i+1,target-arr[i],arr,ds);
            ds.pop_back();
        }
        return;  
}

int main(){ 
    vector<int> arr{1,1,1,2,2};
    int target=4;
    vector<int> ds;
    combinationSum2(0,target,arr,ds);
    return 0;
}