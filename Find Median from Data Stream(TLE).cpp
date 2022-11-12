class MedianFinder {
public:
    vector<int>nums;  
    MedianFinder() {
          
    }
    
    void addNum(int num) {
        nums.push_back(num);
    }
    
    double findMedian() {
        sort(nums.begin(),nums.end());
        if(nums.size()%2!=0){
            return nums[nums.size()/2];
        }
        int mid=nums.size()/2;
        double ans=nums[mid-1]+nums[mid];
        ans=ans/2;
        return ans;
    }
};


/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
