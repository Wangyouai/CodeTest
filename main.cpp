#include <iostream>
#include "Sort.h"
#include "util.h"

int main() {
    priorityqueue<int> p;
    std::vector<int> input = {5,12,2,55,3,6,1,14,3,7,26};

    for(int i=0;i<input.size();++i){
        p.push(input[i]);
        if(i>=5){
            p.pop();
        }
    }
    std::cout<<"结果为 "<<p.top()<<std::endl;
    return 0;
}
