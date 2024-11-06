// Is there any element that all elements divisible by?

#include "iostream"
using namespace std;

int main() {

    // Algorithm: use nested loops
    // If first_loop_element == second_loop_element: skip
    // If second_loop_element % first_loop_element != 0: break (case failure)
    // Else: loop arrives successfully at the end and the target is found
    
    int n;
    cin >> n;
    int target_element = -1; // by default, it is -1. If any element found, it is set to the element's value
    int nums[n];

    // Input array elements
    for (int i=0; i < n; i++) {
        cin >> nums[i];
    }

    for (int index1=0; index1 < n; index1++) {
        if (target_element != -1) {
            break;
        }
        for (int index2=0; index2 < n; index2++) {
            if (index1 == index2) {
                continue;
            }
            if (nums[index2] % nums[index1] != 0) { 
                // if at least one number is not divisible, then case fails => break 
                break;
            }
            if ((index2  == n - 1) || (index1 == n - 1 && index2 == n - 2)) { 
                // this case works when iteration arrives at the last elements, meaning success
                target_element = nums[index1];
            }
        }
    }

    cout << target_element << endl;

    return 0;
}