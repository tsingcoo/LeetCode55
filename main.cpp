#include <iostream>
#include "solution.h"

int main() {
    Solution s;
    std::vector<int> A = {3,2,1,0,4};
    bool res = s.canJump(A);
    std::cout<<res<<std::endl;
    return 0;
}