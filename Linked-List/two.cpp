#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sid[n], stime[n];
    for(int i = 0; i < n; i++) {
        cin >> sid[i] >> stime[i];
    }

    // Bubble sort based on stime
    for(int i = 0; i < n - 1; i++) {
        bool check = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(stime[j] > stime[j+1]) {
                // Swap stime
                int temp = stime[j];
                stime[j] = stime[j+1];
                stime[j+1] = temp;

                // Swap corresponding sid
                int temp2 = sid[j];
                sid[j] = sid[j+1];
                sid[j+1] = temp2;

                check = true;
            }
        }
        if(!check) break; // Already sorted
    }

    for(int i = 0; i < n; i++) {
        cout << sid[i] << " " << stime[i] << endl;
    }

    // Print first two sid values
    if (n >= 2)
        cout << sid[0] << " " << sid[1] << endl;

    return 0;
}
