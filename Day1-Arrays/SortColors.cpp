// Solved using two approaches, one was using inbuilt sort function kindof brute force
//using basic if else loop

/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            sort(nums.begin(),nums.end());
        }
    }
};*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int beg =0;
        int mid =0;
        int end = nums.size()-1;

        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[beg],nums[mid]);
                beg++;
                mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};