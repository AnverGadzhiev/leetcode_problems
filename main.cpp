#include <iostream>
#include "bin_search.h"

int main() {
    std::vector<int> test = {-1,0,3,5,9,12};
    int target = 9; 
    std::cout << Solution::search(test, target);
    return 0;
}