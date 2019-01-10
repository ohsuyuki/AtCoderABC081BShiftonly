//
//  main.cpp
//  ABC081BShiftonly
//
//  Created by osu on 2018/12/25.
//  Copyright © 2018 osu. All rights reserved.
//

#include <iostream>
#include <vector>

bool divisionTwo(std::vector<int>& nums) {
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]%2 != 0) {
            return false;
        }
        nums[i] = nums[i] / 2;
    }
    return true;
}

int main(int argc, const char * argv[]) {

    int argsCount = 0;
    std::cin >> argsCount;

    std::vector<int> nums(argsCount);
    for(int i=0; i<argsCount; i++) {
        std::cin >> nums[i];
    }

    int count = 0;
    while(true) {
        if(divisionTwo(nums) == false) {
            break;
        }
        count++;
    }

    std::cout << count;

    return 0;
}
