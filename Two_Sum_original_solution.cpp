#include<iostream>
#include<vector>

//Logic

//1) Loop over the array, Take the first element and substracte it from the target
//2) Loop again for each number, check if the number exist and it is not the same number then return the indcices 
//3) if it is not exist increment the first loop and repeat.

// how this logic can be imporved?

//1) iterating twice is two slow, better to find a data structure that have a decent time complexity like unordered map
//2) no need to iterat again you can just search for the number

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target){
        std::vector<int> local_v;
        int look_for_value;
        for(int i=0;i<nums.size();i++){ 
          look_for_value = target - nums[i];

          for(int j=0; j<nums.size();j++){
           if (look_for_value == nums[j] and i != j){
             local_v.push_back(j);
           }
         }
        }

        // for(auto i:local_v){
        //     std::cout<<i<<std::endl;
        // }
        return local_v;
    }

};

int main(){
   Solution solution_test;
   //std::vector<int> v{2,10,11,7};
   //std::vector<int> v{3,2,4};
   std::vector<int> v{3,3};
   int target{6};
   solution_test.twoSum(v,target); 
}

