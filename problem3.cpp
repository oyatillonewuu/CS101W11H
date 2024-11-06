#include "iostream"
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    int target = -1;

    // Input array elements
    for (int i=0; i < n; i++) {
        cin >> nums[i];
    }

    for (int case_index = 0; case_index < n; case_index++) {
        if (target != -1) {
            break;
        } 
        for (int pair_index = 0; pair_index < n; pair_index++) {
            // Skip current number
            if (case_index == pair_index) {
                continue; // or skip
            }
            // If one element equal to the current is found, break (because pair exists)
            if (nums[case_index] == nums[pair_index]) {
                break;
            }
            if (pair_index == n - 1) { 
                // if pair_index is the latest index, it means that no pair was found. Therefore, nums[case_index] is target
                target = nums[case_index];
                break;
            }
        }
    }
    cout << target;

    return 0;
}