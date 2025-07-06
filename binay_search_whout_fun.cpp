#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = -1;

    int st = 0;
    int end = arr.size() - 1;
    int result = -1;

    while (st <= end) {
        int mid = (st + end) / 2;

        if (tar > arr[mid]) {
            st = mid + 1;
        } else if (tar < arr[mid]) {
            end = mid - 1;
        } else {
            result = mid;
            break;
        }
    }

    cout << result;
    return 0;
}
