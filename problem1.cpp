#include "iostream"
using namespace std;

int main() {
    int n;
    int sum=0;
    cin >> n;
    int nums1[n];
    int nums2[n];
    
    for (int i=0; i < n; i++) {
        cin >> nums1[i];
    }
    for (int i=0; i < n; i++) {
        cin >> nums2[i];
    }

    for (int i=0; i < n; i++) {
        sum += nums1[i] * nums2[i];
    }

    cout << sum << endl;
    return 0;
}
