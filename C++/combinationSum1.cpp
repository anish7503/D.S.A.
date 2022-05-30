#include<iostream>
#include<vector>
using namespace std;

void combinationSum1(int ind, int target, vector<int>& arr, vector<int> &ds){
        if(ind==arr.size()){
            if(target==0){
                for(auto it : ds){
                    cout<<it<<" ";
                }
                cout<<endl;       
            }
            return;
        }
        
        //Picking same element 
        if(arr[ind]<=target){
            ds.push_back(arr[ind]); 
            combinationSum1(ind,target-arr[ind],arr,ds);
            ds.pop_back();
        }
        
        //Not picking that element
        combinationSum1(ind+1,target,arr,ds);
}

int main(){ 
    vector<int> arr{2,3,6,7};
    int target=7;
    vector<int> ds;
    combinationSum1(0,target,arr,ds);
    return 0;
}