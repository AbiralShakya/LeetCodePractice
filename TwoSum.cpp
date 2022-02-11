#include <iostream> 
#include <vector> 
#include <unordered_map>
using namespace std;



vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> index;
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        int num = target - nums[i];
        if(index.find(num) != index.end()){
            ans.push_back(index[num]);
            ans.push_back(i);
            return ans;
        }
        index[nums[i]] = i;
    }
    return ans;
}
