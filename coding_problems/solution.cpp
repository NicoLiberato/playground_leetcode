#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*

________________________________________________________________________________________________

This problem was asked by Uber.

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand. 
Find the minimum element in O(log N) time. You may assume the array does not contain duplicates.

For example, given [5, 7, 10, 3, 4], return 3.
________________________________________________________________________________________________


*/

int main() {
    
    std::vector<int> v = {5, 7, 10, 3, 4};
    auto result = std::min_element(v.begin(), v.end());
    std::cout << *result << std::endl;
}