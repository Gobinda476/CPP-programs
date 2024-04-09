/* void sortColors(vector<int>& nums) {
       //one pass solution
       int low = 0;
       int mid = 0;
       int high = nums.size()-1;
       //1) think only about the mid
       //2) 0 to (low-1) -> 0, (high+1) to end -> 2, low to (mid-1) -> 1
       while(mid<=high){
        if(nums[mid]==2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        }
        else{
            // if nums[mid]==1
            mid++;
        }
       }
       return;
    } */