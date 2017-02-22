//
// Created by 王青龙 on 22/02/2017.
//

#include "solution.h"

bool Solution::canJump(std::vector<int> &nums) {

    int truepos = nums.size() - 1;
    for (int i = truepos; i >= 0; --i) {
        truepos = (nums[i] + i) >= truepos ? i : truepos;
    }
    return (truepos == 0);

}
