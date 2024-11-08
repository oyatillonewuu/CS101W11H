#include "iostream"
using namespace std;

int main() {
    // Uppercase chars range: 65-90
    // Lowercase chars range: 97-122
    int lowercount = 0, uppercount = 0;

    string inp_str;
    cin >> inp_str;

    for (char target: inp_str) {
        if (target >= 65 && target <= 90) {
            uppercount++;
        } else {
            lowercount++;
        }
    }

    cout << uppercount << " ";

    if (uppercount != 0) {
        for (char target: inp_str) {
            if (target >= 65 && target <= 90) {
                cout << target << " ";
            }
        }
    }

    cout << endl << lowercount << " ";

    if (lowercount != 0) {
        for (char target: inp_str) {
            if (target >= 97 && target <= 122) {
                cout << target << " ";
            }
        }
    }

    

    return 0;
}