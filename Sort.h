//
// Created by wya on 2022/7/6.
//

#ifndef CODETEST_SORT_H
#define CODETEST_SORT_H

#include <cstdlib>
#include <vector>




class mysort{
public:
    void heapify(std::vector<int>& nums, int i,int len){
        int left=2*i+1;
        int right=2*i+2;
        int largest=i;
        if(left<len && nums[left]>nums[largest]){
            largest=left;
        }
        if(right<len && nums[right]>nums[largest]){
            largest=right;
        }
        if(largest!=i){
            std::swap(nums[i],nums[largest]);
            heapify(nums,largest,len);
        }
    }

    void buildMaxHeap(std::vector<int>& nums,int len){
        for(int i=len/2;i>=0;--i){
            heapify(nums,i,len);
        }
    }

    void heapsort(std::vector<int>& nums){
        int n=nums.size();
        buildMaxHeap(nums,n);
        for(int i=n-1;i>0;--i){
            std::swap(nums[0],nums[i]);
            n--;
            heapify(nums,0,n);
        }

    }

};


#endif //CODETEST_SORT_H
