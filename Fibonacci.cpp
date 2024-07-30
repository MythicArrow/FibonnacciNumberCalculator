#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    // Start measuring time
    auto start = high_resolution_clock::now();

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }

    // Stop measuring time
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);

    cout << "\nExecution Time: " << duration.count() << " seconds" << endl;

    return 0;
}



