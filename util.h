//
// Created by wya on 2022/7/6.
//

#ifndef CODETEST_UTIL_H
#define CODETEST_UTIL_H

#include <cstdlib>
#include <vector>
template<typename T>
class priorityqueue{
public:
    std::vector<T> queue;
    priorityqueue();
    void push(T);
    T top();
    void pop();
};

template<typename T>
class heap{
public:
    void buildheap(std::vector<T>& arr,int len);
    void heapity(std::vector<T>& arr,int start,int end);

};

template<typename T>
void heap<T>::buildheap(std::vector<T> &arr, int len) {
    for(int i=len/2-1;i>=0;--i){
        heapity(arr,i,len-1);
    }

}

template<typename T>
void heap<T>::heapity(std::vector<T> &arr, int start, int end) {
    int dad=start;
    int son=2*dad+1;
    while(son<=end){
        if(son+1<=end && arr[son]>arr[son+1]) son++ ; ////小顶堆
        if(arr[son]>arr[dad]) break;
        else {
            std::swap(arr[son],arr[dad]);
            dad=son;
            son=2*dad+1;
        }
    }
}


template<typename T>
priorityqueue<T>::priorityqueue() = default;

template<typename T>
void priorityqueue<T>::push(T val) {
    queue.template emplace_back(val);
    heap<T> p;
    p.buildheap(this->queue,this->queue.size());

}

template<typename T>
T priorityqueue<T>::top() {
    if(queue.empty()) exit(-1);
    return queue[0];
}

template<typename T>
void priorityqueue<T>::pop() {
    std::swap(queue[0],queue[queue.size()-1]);
    queue.pop_back();
    heap<T> p;
    p.buildheap(this->queue,this->queue.size());
}


#endif //CODETEST_UTIL_H
