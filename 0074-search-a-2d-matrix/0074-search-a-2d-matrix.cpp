class Solution {
public:
int BinarySearch(vector<int>& nums, int target){
    int start=0,end=nums.size()-1;
    int mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }return -1;
}

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int start=0, end=matrix.size()-1;
    int a=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(matrix[mid][0]==target || matrix[mid][matrix[0].size()-1]==target){
            return true;
        }else if(matrix[mid][0]<target && matrix[mid][matrix[0].size()-1]>target){
            a= BinarySearch(matrix[mid],target);
            break;
        }else if(matrix[mid][0]>target){
            end=mid-1;
        }else if(matrix[mid][matrix[0].size()-1]<target){
            start=mid+1;
        }
    }
    if(a==-1){
        return false;
    }else{
        return true;
    }
}
};