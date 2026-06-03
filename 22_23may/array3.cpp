class Solution {
public:
    int count = 0;
    bool check(vector<int>& nums) {
        vector<int> dup = nums;
        sort(nums.begin(), nums.end());
        for (int x = 0; x < nums.size(), x++){
            for (int i = 0; i < nums.size(), i++){
                
                if (nums[i] != dup[(i + x) % nums.size()]){
                    // this x wont work 
                    break;
                }
                else{
                    count++;
                }
            }
            if (count == nums.size()){
                return true;
            }
            else{
                count = 0;
            }
        }
        retun false;
    }
};
