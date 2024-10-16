#include<iostream>
#include<vector>
#include<queue>

class Solution{
    public:
        // Function to find the kth largest element 
        int findKthLargest(std::vector<int> &nums, int k){
            // Storing first k elements in min priority queue
            int ans;
            std::priority_queue<int,std::vector<int>,std::greater<int>> minPq;
            for(int i=0;i<k;i++){
                minPq.push(nums[i]);
            }

            // Traversing array from k+1 element to n element 
            // If nums[j]>= top of pq then , pop and then push nums[j] in pq
            int lenArr = nums.size();
            for(int j=k;j<lenArr;j++){
                if(nums[j]>=minPq.top()){
                    minPq.pop();
                    minPq.push(nums[j]);
                }
            }
            // min priority queue top will be our answer
            ans = minPq.top();
            return ans;
        } 
};

int main(){
    int n;
    std::cout<<"Input the value of n"<<std::endl;
    std::cin>>n;
    std::cout<<"Input the value of k"<<std::endl;
    int k;
    std::cin>>k;
    std::vector<int> nums(n);
    for(int i=0;i<n;i++){
        std::cin>>nums[i];
    }   
    Solution obj;
    std::cout<<obj.findKthLargest(nums,k);
}