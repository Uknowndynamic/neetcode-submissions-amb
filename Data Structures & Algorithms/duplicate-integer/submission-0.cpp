class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int flag=0;
        for(auto it:mp){
            if(it.second>=2)
              flag=1;
    }
      return flag==1?true:false;
    }

};