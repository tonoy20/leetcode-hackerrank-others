
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>m;

        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        map<int, int>::iterator itr = m.begin();
        while(itr!=m.end()){
            if(itr->second > 1){
                return true;
            }
        }
        return false;
    }
};


