#include "iostream"
#include <array>
using namespace std;

// int find_min_element(int arr[], int size) {
//     int target = arr[0];
//     for (int i = 0; i < size; i++) {
//         if (target > arr[i]) {
//             target = arr[i];
//         }
//     } 
//     return target;
// }

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i < n; i++) {
        cin >> arr[i];
    }

    int max_profit = arr[1] - arr[0]; // initial value

    for (int price1inx = 0; price1inx < n; price1inx++) {
        for (int price2inx = price1inx + 1; price2inx < n; price2inx++) {
            if ((arr[price2inx] - arr[price1inx]) > max_profit) {
                max_profit = arr[price2inx] - arr[price1inx];
            }
        }
    }

    max_profit = (max_profit < 0) ? 0:max_profit;
    cout << max_profit << endl;

    return 0;
}