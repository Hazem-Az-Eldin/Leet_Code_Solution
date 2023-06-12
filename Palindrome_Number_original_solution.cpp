#include<iostream>
#include<vector>
//1) transfer int numb to arry or vector
//2) check if the vector is equal to the number
//3) check if number is negative then add to the begining 
//4) check if the number  
class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        std::vector<int> my_vec;
        if(x<0){
          return false; 
        }
        while(true){
            std::cout<<x%10<<std::endl;
            my_vec.insert(my_vec.begin(),x%10); // x%10??
            x /= 10;                
            if(x==0){
              break;
            }
        }
        for(auto i:my_vec){
            if (i != temp%10){
              return false;
            } 
            temp/=10;
        }

        return true;
    }
};


int main(){
    Solution solution;
    bool test =solution.isPalindrome(3659);
    std::cout<<"the Return value of the function is:"<<test<<std::endl;
}