#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
//Logic

//1) Loop over the array, Take the first element and substracte it from the target
//2) search for the value, if it does exist then return idicies 
//3) else...

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){
    
    //     int look_up_value;
    //     std::vector<int> my_vec;
    //     std::unordered_map<int,int> unordered_map;
    //     for(int i =0; i<nums.size();i++){
    //         look_up_value = target - nums[i];
    //         if(std::find(nums.begin(),nums.end(), look_up_value) != nums.end()){
    //           //    my_vec.push_back(std::distance(nums.begin(),it));
    //         }
    //         else{
    //           my_vec.push_back(i);
    //         }
    //     }
    //     return my_vec;
    // }

        int n=nums.size();
        std::unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end()){
                std::cout<<target-nums[i]<<std::endl;
                return {mp[target-nums[i]],i};
            }
            else{
               // std::cout<<nums[i]<<std::endl;
                mp[nums[i]]=i;
            }
        }
            return{-1,-1};
    }

};

int main(){
   Solution solution_test;
   //std::vector<int> v{2,10,11,7};
   std::vector<int> v{3,2,4};
   //std::vector<int> v{3,3};
   int target{6};
   std::vector<int> test = solution_test.twoSum(v,target); 
   for(auto i :test){
    std::cout<<i<<std::endl;
   }
}

