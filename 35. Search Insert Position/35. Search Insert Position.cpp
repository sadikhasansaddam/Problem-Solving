#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &nums, int target) {
    /*
    binary search ::  The array is sorted so we just have to figure out where should it be placed.
    So, we just have to figure out the position at which the previous value is less than our element and next value is more than our
    element. That's how its figured out that it's a binary search problem.
    */
    int low = 0, mid, high;
    high = nums.size();

    if(target > nums[high-1])
        return high;

    while(low <= high) {
        mid = (low + high) / 2;
        if(nums[mid] == target)
            return mid;
        if(target < nums[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return low;

}

int main() {

    int n, data, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> data;
        nums[i] = data;
    }

    cin >> target;
    cout << solution(nums, target) << endl;

}


/*
// Try later
class Solution {
public:
    int searchInsert(vector<int>& v, int target) {

        auto it = lower_bound( v.begin() ,v.end() , target );
        return (it == v.end()) ?  v.size() : (it - v.begin());

    }
};
*/
