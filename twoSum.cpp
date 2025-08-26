#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void twoSum(vector<int>& nums,int target){
    unordered_map<int,int> hash;
    int count=0;
    for(int i=0;i<nums.size();i++){
        int search=target-nums[i];
        if(hash.find(search)!=hash.end()){
            cout<<hash[search]<<" "<<i<<endl;
        }
        hash[nums[i]]=i;
        count++;
    }
    if(count==nums.size()){
        cout<<"No such two numbers."<<endl;
    }
}

int main(){
    int size,temp,target;
    vector<int> nums;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>temp;
        nums.push_back(temp);
    }
    cin>>target;
    twoSum(nums,target);
    return 0;
}