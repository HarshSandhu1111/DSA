#include <iostream>
#include <map> // Include only necessary headers
using namespace std;

int main() {
    map<int, int> mpp;
    int arr[] = {1, 2, 3, 1, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Count frequency of each number
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter number: ";
        cin >> number;

        // Check if the number exists in the map before accessing
        if (mpp.find(number) != mpp.end()) {
            cout << "Frequency: " << mpp[number] << endl;
        } else {
            cout << "Number not found." << endl;
        }
    }

    return 0;
}
